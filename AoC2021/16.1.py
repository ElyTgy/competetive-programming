packets =[]
hex_rep = ""
bin_rep = ""
id_g = 1
hex_to_bin = {
    '0':'0000',
    '1':'0001',
    '2':'0010',
    '3':'0011',
    '4':'0100',
    '5':'0101',
    '6':'0110',
    '7':'0111',
    '8':'1000',
    '9':'1001',
    'A':'1010',
    'B':'1011',
    'C':'1100',
    'D':'1101',
    'E':'1110',
    'F':'1111'}

def binaryToDecimal(n): 
    return int(n,2) 

for line in iter(input, '\n'):
    if line == "exit":
        break
    hex_rep += line

for c in hex_rep:
    bin_rep += hex_to_bin[c]

print(bin_rep)

def literal_packet(bin, parent_id):
    global id_g
    packet_d = {}
    
    packet_d['id'] = id_g
    id_g += 1
    packet_d['parent_id'] = parent_id
    packet_d['version'] = binaryToDecimal(bin[:3])
    packet_d['type_id'] = binaryToDecimal(bin[3:6])
    
    #set up the final number as empty string and packet count as zero
    packet_d['fin_num'] = ''
    packet_d['sub_packet_count'] = 0

    #current_index is from after the version and type_id bits
    current_index = 6
    is_end = False

    #the loop continues until a sub packet starts with 0
    while not is_end:
        if bin[current_index] == '0':
            is_end = True

        #add the bits that need to be turned to decimal at the end
        packet_d['fin_num'] += bin[current_index+1:current_index+5]

        #keep track of cub_packet_count to add the padding before them to the length
        packet_d['sub_packet_count'] += 1
        current_index += 5
    
    packet_d['total_length'] = 3+3+len(packet_d['fin_num'])+packet_d['sub_packet_count']
    packets.append(packet_d)


def op_packet(bin, parent_id):
    global id_g
    packet_d = {}

    packet_d['id'] = id_g
    id_g += 1
    packet_d['parent_id'] = parent_id
    #store version and type id
    packet_d['version'] = binaryToDecimal(bin[:3])
    packet_d['type_id'] = binaryToDecimal(bin[3:6])

    #store the length type id
    packet_d['I'] = int(bin[6])

    #if length id is 0, store the length of all sub-packets
    if packet_d['I'] == 0:
        assert len(bin[7:22]) == 15
        packet_d['sub_packet_length'] = binaryToDecimal(bin[7:22])
        pasrse_packets_len(bin[22:packet_d['sub_packet_length']])
    #if length id is 1, store the number of sub packets and the length based on that
    else:
        assert len(bin[7:18]) == 11
        packet_d['sub_packet_count'] = binaryToDecimal(bin[7:18])
        packet_d['sub_packet_length'] = 11*binaryToDecimal(bin[7:18])
    #calculate total length
    packet_d['total_length'] = 3+3+1+(15 if packet_d['I'] == 0 else 11)+packet_d['sub_packet_length']
    packets.append(packet_d)


def parse_packets_count(bits, count, parent_id):
    pass


def pasrse_packets_len(bits, parent_id):
    
    init_version = binaryToDecimal(bits[3:6])
    if init_version != 4:
        op_packet(bin_rep, parent_id)
    else:
        literal_packet(bin_rep)


#if paccket id isnt 4
init_version = binaryToDecimal(bin_rep[3:6])
if init_version != 4:
    print(op_packet(bin_rep, 0))
else:
    print(literal_packet(bin_rep, 0))
