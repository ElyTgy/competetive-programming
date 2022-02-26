
from collections import Counter
arr = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    arr += line.split(",")

d = {0:0,1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0}
for i in arr:
    d[int(i)] += 1

print(d)

day = 256

for i in range(day):
    born = d[0]
    for j in range(8):
        d[j] = d[j+1]
    d[6] += born
    d[8] = born

sum = 0
for i in range(9):
    sum += d[i]

print(d)
print(sum)