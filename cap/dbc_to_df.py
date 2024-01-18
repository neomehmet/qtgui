import cantools
file_name = "CEER_B_CANFD_FRS01.dbc"

db = cantools.database.load_file(file_name)

message = db.get_message_by_name("BundleEAFlexrayToAECANFD10msNo1")

#print(message.signals[2])
print()
signal = message.signals[13]

print( signal.start )
### signal attributes
"""
byte_order
choice_to_number
choices
comment
comments
conversion
dbc
initial
invalid
is_float
is_signed
length
maximum
minimum
multiplexer_ids
name
offset
raw_initial
raw_invalid
raw_to_scaled
scale
scaled_to_raw
start
unit
"""