from collections import Counter

base_str = ""
reactions = {}
steps = 10

for line in iter(input, '\n'):
    if line == "exit":
        break
    if "->" not in line:
        base_str = line
    else:
        i,j = line.split(" -> ")
        reactions[i] = j


i = 0
for s in range(steps):
    while i != len(base_str)-1:
        key = base_str[i]+base_str[i+1]
        if key not in reactions:
            i += 1
        else:
            base_str = base_str[:i+1] + reactions[key] + base_str[i+1:]
            i += 2
    i = 0


counter = Counter(base_str)
min = (base_str[0], counter[base_str[0]])
max = (base_str[0], counter[base_str[0]])

for key, value in counter.items():
    if value < min[1]:
        min = (key, value)
    elif value > max[1]:
        max = (key, value)

print(max[1] - min[1])
