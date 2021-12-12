from typing import DefaultDict
from collections import defaultdict
graph = defaultdict(list)

import sys
sys.setrecursionlimit(300000)
all_paths = []

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
    print("current path is", u, "and it has been visited", visited[u][0], visited[u][1])

    path.append(u)

    if u == d:
        all_paths.append(path)
        print(path)
    else:
        for i in graph[u]:
            if visited[i][0] == False:
                printAllPathsUntil(i, d, visited, path, specilchar)
    
    if specilchar == u:
        if visited[u][1] ==1 or visited[u][1] == 2:
            visited[u][1] -= 1
        if visited[u][1] == 0:
            path.pop()
            visited[u][0] = False
    else:
        path.pop()
        visited[u][0] = False


visited = dict([(key, [False,0]) for key in graph.keys()])
path = []
printAllPathsUntil("start", "end", visited, path, 'b')
print(len(all_paths))
print(all_paths)