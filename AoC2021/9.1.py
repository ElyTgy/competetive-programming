lowest_points = []
map = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    arr = [int(c) for c in line]
    map.append(arr)

for line_counter, line in enumerate(map):
    for i, curr_number in enumerate(line):
        #print(i)
        adjacents = []
        if i != 0:
            adjacents.append(line[i-1])
        if i != len(line)-1:
            adjacents.append(line[i+1])
        if line_counter != 0:
            adjacents.append(map[line_counter-1][i])
        if line_counter != len(map)-1:
            adjacents.append(map[line_counter+1][i])
        
        if -1 in adjacents:
            continue
        filtered_list = list(filter(lambda adj: adj > curr_number, adjacents))
        if len(filtered_list) == len(adjacents):
            lowest_points.append(curr_number)
            map[line_counter][i] = -1

lowest_points = [e+1 for e in lowest_points]
print(sum(lowest_points))