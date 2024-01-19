import binascii

my_string = "Hello, world!"
my_binary = map(bin,bytearray(my_string))
print(my_binary)

my_string = ''.join(chr(int(my_binary[i:i+8], 2)) for i in range(0, len(my_binary), 8))
print(my_string)
