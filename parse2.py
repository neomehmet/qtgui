import re
import json

def pure_line(line):
    line = line.replace(":", " ")
    line = line.replace("(", " ")
    line = line.replace(")", " ")
    line = line.replace("|", " ")
    line = line.replace("@", " ")
    line = line.replace("]", " ")
    line = line.replace("[", " ")
    line = line.replace(",", " ")
    line = line.replace(":", " ")
    line = line.replace("+", " +") #bundan " +" olcak
    line = line.replace("  ", " ")
    line = line.replace("   ", " ")
    line = line.split(" ")
    line = [x for x in line if x != '']
    return line

    



def add_comment(line, dbc_dict):
    line = line.strip()
    line = pure_line(line)
    for message in dbc_dict:
        message = dbc_dict[message]
        if message["message_id"] == line[2]:
            for signal in message["signals"]:
                if signal["signal_name"] == line[3]:
                        signal["comment"] = " ".join(line[4:])
    return dbc_dict

def add_signals(file, dbc_dict, message_id, message_name,sender):
    i = 0
    signals = list()
    for line_signal in file:
        line_signal = line_signal.strip()
        if line_signal.startswith("SG_ "):
            line_signal = pure_line(line_signal)
            i += 1
            if int(line_signal[3]) <= 8:
                type_uint = "uint8"
            elif int(line_signal[3]) <= 16:
                type_uint = "uint16"
            elif int(line_signal[3]) <= 32:
                type_uint = "uint32"
            else:
                type_uint = "uint64"
            print(line_signal)
            signals.append(
                {
                    "signal_name": line_signal[1],
                    "signal_start": line_signal[2],
                    "signal_length": line_signal[3],
                    "signal_factor": line_signal[6],
                    "signal_offset": line_signal[7],
                    "signal_min": line_signal[8],
                    "signal_max": line_signal[9],
                    "signal_type_def": type_uint,
                    "signal_endian" : "little Endian" if line_signal[4] == "1" else "Big Endian"
                }
            )
        else:
            signals.reverse()
            signals.sort(key=lambda x: int(x["signal_start"]))

            dbc_dict[message_name] = {
                "sender" : sender,
                "message_id": message_id,
                "message_name": message_name,
                "signal_num": i,
                "signals": signals
            }
            return dbc_dict


def parse(path):
    dbc_dict = {}
    message_id = ""
    message_name = ""
    message_begin = 0
    try:
        with open(path, "r") as dbc_base:
            for line in dbc_base:
                if not line:
                    continue
                line = line.strip()
                line = line.replace(":", " ")
                if line.startswith("BO_ ") and not (message_begin):
                    message_id = line.split(" ")[1]
                    message_name = line.split(" ")[2]
                    sender = line.split(" ")[4]
                    dbc_dict = add_signals(dbc_base, dbc_dict, message_id, message_name,sender)
                if line.startswith("CM_ SG_ "):
                    dbc_dict = add_comment(line, dbc_dict)

            with open("dbc_js_object.json", "w") as f:
                json.dump(dbc_dict, f, indent=4)
            return dbc_dict
    except Exception as e:
        print(e)
