#when there are no connnecting edges, the distance between 2 nodes will be infinite

#keep unchecked node as a dict of (x,y):edge_distance -> given by input: tthe cost to travel the edge
#keep unchecked node as a dict of (x,y):distance
#keep a list of uncheck indices (x,y)

#current_node = source
#while there are nodes in the unchecked list:
    #make a list of all adjacent nodes to current
    #for each adj node
        #if node in the uncheck node list:
            #if distance of current_node + edge_distance to adj < distance of adjacent:
                #update that node's distance of current_node + edge_distance to adj
    #remove current_node from the unchecked list
    #current_node = node with smallest distance to current that hesnt been checked. we only consider adj because the others are at infinite distance

import copy

def get_adjs(node):
    adj_list = []
    if node[0] != 0:
        adj_list.append((node[0]-1, node[1]))
    if node[0] != len(grid[0])-1:
        adj_list.append((node[0]+1, node[1]))
    if node[1] != 0:
        adj_list.append((node[0], node[1]-1))
    if node[1] != len(grid)-1:
        adj_list.append((node[0], node[1]+1))
    return adj_list


def get_min():
    distances_copy = copy.deepcopy(distances)
    for key in distances_copy.keys():
        if distances_copy[key] == -1 or key not in unchecked_indeces:
            del distances_copy["key"]
    min_val = [(-1,-1),float('inf')]
    for key, value in distances_copy.items():
        if value < min_val[1]:
            min_val = [key, value]
    return min[0]

unchecked_indeces = []
distances = {}
edge_distances = {}

grid = []
for line in iter(input, '\n'):
    if line == "exit":
        break
    grid.append([c for c in line])
grid[0][0]=0

for r_num, row in enumerate(grid):
    for c_num, num in enumerate(row):
        unchecked_indeces.append((c_num, r_num))
        distances[(c_num, r_num)] = -1
        edge_distances[(c_num, r_num)] = num

distances[(0, 0)] = 0
edge_distances[(0, 0)] = 0

current_node = (0,0)
while(len(unchecked_indeces) > 0):
    curr_x, curr_y = current_node
    adj_list = get_adjs(current_node)
    for node in adj_list:
        if node in unchecked_indeces:
            x, y = node
            if distances[x][y] == -1 or distances[curr_x][curr_y]+edge_distances[x][y] < distances[x][y]:
                distances[x][y] = distances[curr_x][curr_y]+edge_distances[x][y]
    unchecked_indeces.remove(current_node)
    current_node = get_min()

print(distances)
