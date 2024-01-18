import re
import json

def add_signals(file, dbc_dict, message_id, message_name):
    i = 0
    signals = list()
    for line_signal in file:
        line_signal = line_signal.strip()
        if line_signal.startswith("SG_ "):
            line_signal = re.sub(r"\W+", " ", line_signal)
            i += 1
            signals.append(
                {
                    "signal_name": line_signal.split(" ")[1],
                    "signal_start": line_signal.split(" ")[2],
                    "signal_length": line_signal.split(" ")[3],
                    "signal_typeDef": line_signal.split(" ")[4],
                    "signal_factor": line_signal.split(" ")[5],
                    "signal_offset": line_signal.split(" ")[6],
                    "signal_min": line_signal.split(" ")[7],
                    "signal_max": line_signal.split(" ")[8],
                }
            )
        else:
            signals.reverse()
            signals.sort(key=lambda x: int(x["signal_start"]))

            dbc_dict[message_name] = {
                "message_id": message_id,
                "message_name": message_name,
                "signal_num": i,
                "signals": signals,

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
                    dbc_dict = add_signals(dbc_base, dbc_dict, message_id, message_name)

            with open("file_name.json", "w") as f:
                json.dump(dbc_dict, f, indent=4) 
            return dbc_dict
    except Exception as e:
        print(e)