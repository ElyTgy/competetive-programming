from typing import DefaultDict
from collections import defaultdict
graph = defaultdict(list)

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

def printAllPathsUntil(u, d, visited, path):
    if not u.isupper():
        visited[u] = True
    path.append(u)

    if u == d:
        all_paths.append(path)
    else:
        for i in graph[u]:
            if visited[i] == False:
                printAllPathsUntil(i, d, visited, path)
    
    path.pop()
    visited[u] = False


visited = dict([(key, False) for key in graph.keys()])
path = []
printAllPathsUntil("start", "end", visited, path)
print(len(all_paths))