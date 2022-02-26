from collections import deque as queue
import copy
lowest_point_locs = []
lowest_points = []
map = []
basin_sizes = []

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
            lowest_point_locs.append((line_counter, i))
            lowest_points.append(curr_number)
            map[line_counter][i] = -1


dRow = [-1, 0, 1, 0]
dCol = [0, 1, 0, -1]

def is_valid(mapc, vis, r, c):
    if(r < 0 or c < 0 or r >= len(map) or c >= len(map[0])):
        return False
    if vis[r][c] == True:
        return False
    if mapc[r][c] == 9:
        return False
    return True


def BFS(mapc, vis, r, c):
    q = queue()

    q.append((r, c))
    vis[r][c] = True
    
    while(len(q) > 0):
        cell = q.popleft()
        x = cell[0]
        y = cell[1]

        for i in range(4):
            adjx = x + dRow[i]
            adjy = y + dCol[i]
            if is_valid(mapc, vis, adjx, adjy):
                q.append((adjx, adjy))
                vis[adjx][adjy] = True
    return vis

def count_true(arr2d):
    count = 0
    for r in arr2d:
        for c in r:
            if c == True:
                count += 1
    return count

for r,c in lowest_point_locs:
    visited = [[False for c in r] for r in map]
    valids = BFS(map, visited, r, c)
    basin_sizes.append(count_true(valids))

basin_sizes.sort()
print(basin_sizes[-1]*basin_sizes[-2]*basin_sizes[-3])