from typing import DefaultDict
from collections import defaultdict, Counter
import copy
graph = defaultdict(list)

import sys
sys.setrecursionlimit(300000)
path_count = 0
char_paths = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    i,j = line.split("-")
    graph[i].append(j)
    graph[j].append(i)

graph["end"] = []
for g, l in graph.items():
    if 'start' in l:
        l.remove('start')
        graph[g] = l

print(graph)

def printAllPathsUntil(u, d, visited, path, specilchar):
    if not u.isupper():
        if u != specilchar:
            visited[u][0] = True 
        else:
            visited[u][1] += 1
            if visited[u][1] == 2:
                visited[u][0] = True
    #print("current path is", u, "and it has been visited", visited[u][0], visited[u][1])

    path.append(u)

    if u == d:
        global path_count
        path_count+=1
        char_paths.append(copy.deepcopy(tuple(path)))
        #for e in path:
        #    print(e, end=",")
        #print()
    else:
        for i in graph[u]:
            if visited[i][0] == False:
                printAllPathsUntil(i, d, visited, path, specilchar)
    
    path.pop()
    if specilchar == u:
        if visited[u][1] ==1 or visited[u][1] == 2:
            visited[u][1] -= 1
    visited[u][0] = False


all_paths = []
lower_cases = [node for node in graph.keys() if (node.islower() and node != "start" and node != "end")]
for c in lower_cases:
    visited = dict([(key, [False,0]) for key in graph.keys()])
    path = []
    printAllPathsUntil("start", "end", visited, path, c)
    all_paths.append(char_paths)
    char_paths = []

map = {}
for c_arr in all_paths:
    for path in c_arr:
        if path in map:
            map[path] += 1
        else:
            map[path] = 1

print(len(map.keys()))
