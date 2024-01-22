import json


def parse_line(line):
    line = line.replace(":", " ")
    line = line.replace("(", " ")
    line = line.replace(")", " ")
    line = line.replace("|", " ")
    line = line.replace("@", " ")
    line = line.replace("]", " ")
    line = line.replace("[", " ")
    line = line.replace(",", " ")
    line = line.replace(":", " ")
    line = line.replace('""', "None")
    line = line.replace("+", " +")
    line = line.replace("  ", " ")
    line = line.replace("   ", " ")
    line = line.split(" ")
    line = [x for x in line if x != ""]
    return line


def add_comment(line, dbc_dict):
    line = line.strip()
    line = parse_line(line)
    for message in dbc_dict:
        message = dbc_dict[message]
        if message["message_id"] == line[2]:
            for signal in message["signals"]:
                if signal["signal_name"] == line[3]:
                    signal["comment"] = " ".join(line[4:])
    return dbc_dict


def add_signals_in_messages(file, dbc_dict, message_attributes):
    signal_number = 0
    signals = list()
    for line_signal in file:
        line_signal = line_signal.strip()
        
        if line_signal.startswith("SG_ "):
            line_signal = parse_line(line_signal)
            signal_number += 1

            if int(line_signal[3]) <= 8 and line_signal[5] == "+":
                type_uint = "uint8"
            elif int(line_signal[3]) <= 8 and line_signal[5] != "+":
                type_uint = "int8"
            elif int(line_signal[3]) <= 16 and line_signal[5] == "+":
                type_uint = "uint16"
            elif int(line_signal[3]) <= 16 and line_signal[5] != "+":
                type_uint = "int16"
            elif int(line_signal[3]) <= 32 and line_signal[5] == "+":
                type_uint = "uint32"
            elif int(line_signal[3]) <= 32 and line_signal[5] != "+":
                type_uint = "int32"
            elif int(line_signal[3]) <= 64 and line_signal[5] == "+":
                type_uint = "uint64"
            else:
                type_uint = "int64"

            if line_signal[4] == "1": # if signal intel == 1
                big_or_litte = 1
                signals.append(
                    {
                        "signal_name": line_signal[1],
                        "signal_start": line_signal[2],
                        "signal_length": line_signal[3],
                        "signal_endian": "Little Endian[1-intel]",
                        "signal_type_def": type_uint,
                        "signal_factor": line_signal[6],
                        "signal_offset": line_signal[7],
                        "signal_min": line_signal[8],
                        "signal_max": line_signal[9],
                        "signal_unit": line_signal[10],
                        "signal receiving_node": line_signal[11:],
                    }
                )
            else:
                big_or_litte = 0 # signal is motorola
                signals.append(
                    {
                        "signal_name": line_signal[1],
                        "signal_stop": line_signal[2],
                        "signal_length": line_signal[3],
                        "signal_endian": "Big Endian[0-motorola]",
                        "signal_type_def": type_uint,
                        "signal_factor": line_signal[6],
                        "signal_offset": line_signal[7],
                        "signal_min": line_signal[8],
                        "signal_max": line_signal[9],
                        "signal_unit": line_signal[10],
                        "signal receiving_node": line_signal[11:],
                    }
                )
        else:
            signals.reverse()
            if big_or_litte == 1: #  it is == 1 so little Endian
                signals.sort(key=lambda x: int(x["signal_start"]))
            elif big_or_litte == 0: # it is big endian 
                signals.sort(key=lambda x: int(x["signal_stop"]))

            dbc_dict[message_attributes[1]] = {
                "message_id": message_attributes[0],
                "message_name": message_attributes[1],
                "message_length_as_byte": message_attributes[2],
                "sender": message_attributes[3],
                "signal_num": signal_number,
                "signals": signals,
            }
            return dbc_dict


def parse(path):
    dbc_dict = {}
    message_attributes = list()
    message_begin = 0
    try:
        with open(path, "r") as dbc_base:
            for line in dbc_base:
                if not line:
                    continue
                line = line.strip()
                if line.startswith("BO_ ") and not (message_begin):
                    line = parse_line(line)
                    message_attributes = (
                        line[1],
                        line[2],
                        line[3],
                        line[4],
                    )
                    dbc_dict = add_signals_in_messages(
                        dbc_base, dbc_dict, message_attributes
                    )
                elif line.startswith("CM_ SG_ "):
                    dbc_dict = add_comment(line, dbc_dict)

            with open("dbc_js_object.json", "w") as f:
                json.dump(dbc_dict, f, indent=4)
            return dbc_dict
    except Exception as e:
        print(e)


# BO_ <CAN-ID> <MessageName>: <Length> <Transmitter>
"""
CAN-ID — decimal (not hexadecimal). Must be unique to this message only.
Length — bytes , not bits! 
    On CAN 2.0 systems, value can be  1-8
    On CAN FD systems, value must be 1-64
"""
# SG_ Signal1 : 0|1@0+ (1,0) [0|1] "" Vector_XXX
"""
Name    string   ·  unique mnemonic name for identifying the signal
Start      number  ·  the bit number (inclusive) this signal begins at
Size        number  ·  total length of bits this signal occupies
Order     1or0  ·   1 (little-endian/Intel) or  0 (big-endian/Motorola)
Sign        + (unsigned) or –(signed) 
Slope    decimal ·  multiplied  by original signal value   default1 
Offset   decimal ·  added  to the original signal value    default0 
Min.      decimal ·  minimum  return value, relative to  slope and offset
Max.     decimal ·  maximum return value, relative to  slope and offset
Unit        string  ·  optional  units for the return value (e.g. mph)
RxN        string  ·  space-separated list of Receiving Nodes (BoardUnit, BU_)

8 bit (0-255 decimal)
SG_ BattVoltage : 0|8@1+ (.1,0) [0|25.5] "volts" Vector__XXX
0.1 (factor) x 255 -> 25.5
12-bit signal (0-4095 decimal)
SG_ EngineRPM : 8|12@1+ (0.125,0) [0|512] "" Vector__XXX
0.125 (factor) x 4095->511.875 ~ 512
16-bit signal (0-65535 decimal)
SG_ FuelLevel : 8|16@1+ (0.00625,0) [0|41] "liters" Vector__XXX
0.00625 (factor) x 65535->41 liters, or 16.5 gallons
"""
# BA_ "<AttributeName>" [BU_|BO_|SG_] [Node|CAN-ID] [Mnemonic] <Value>;
"""
BA_: The Attribute. Specifies type, NodeName/CAN-ID/SignalName, and value(s).
AttributeName must have a corresponding definition to be considered valid (see below)
"""
# BA_DEF_ [BU_|BO_|SG_] "<AttributeName>" <DataType> [Config];
# BA_DEF_: Attribute Definition. Specifies the type (BU_|BO_|SG_), name, data type, and value configuration.

# BA_DEF_DEF_ "<AttributeName>" ["]<DefaultValue>["];
# BA_DEF_DEF_: Attribute Default Definition. Specifies the default value for the attribute if none is given.

# CM_ [BU_|BO_|SG_] [Node|CAN-ID] [SignalName] "<Comments>";
# CM_ BU_  <NodeId> "<Comments>" ;
# CM_ BO_  <CAN-ID> "<Comments>" ;
# CM_ SG_  <CAN-ID> <SignalName> "<Comments>" ;

# VAL_ <ID> <SignalName>  Key_1 "Val_1" ... Key_N "Val_N";
"""
<ID>: CAN-ID (decimal)
SignalName: Mnemonic (see signals)
Key_N: Raw signal data (integer)
Val_N: Text descriptor (string)
"""

# VAL_ 123 GearSelector  0 "P" 1 "R" 2 "N" 3 "D";
"""
0 -> P (park)
1 -> R (reverse)
2 -> N (neutral)
3 -> D (drive)
"""
# VAL_ 456 HandbrakeStatus  0 "Disengaged" 1 "Engaged";
#   0 = Disengaged
