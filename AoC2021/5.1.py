rows, cols = (1000, 1000) 
arr = [[0 for i in range(cols)] for j in range(rows)] 


for line in iter(input, '\n'):
    if line == "exit":
        break
    pos1, pos2 = line.split(" -> ")
    x1, y1 = pos1.split(',')
    x2, y2 = pos2.split(',')
    x1, x2, y1, y2 = int(x1), int(x2), int(y1), int(y2)
    if x1 == x2:
        for ypos in range(min(y1, y2), max(y1, y2)+1):
            arr[x1][ypos] += 1
    if y1 == y2:
        for xpos in range(min(x1, x2), max(x1, x2)+1):
            arr[xpos][y1] += 1

count = 0
for i in range(len(arr)):
    print('\n')
    for j in range(len(arr[i])):
        print(arr[i][j], " ", end="")
        if arr[i][j] >= 2:
            count += 1

print(count)