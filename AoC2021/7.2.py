import statistics

def median(arr):
    arr.sort()
    if len(arr) % 2 != 0:
        print("odd")
        return [statistics.median(arr)]
    else:
        print("even")
        return [ arr[len(arr)//2], arr[len(arr)//2 - 1] ]

arr = []
for line in iter(input, '\n'):
    if line == "exit":
        break
    arr += line.split(",")

arr = [int(i) for i in arr]

print(max(arr))

dists = []
currdist = 0

for i in range(1884):
    currdist = 0
    for num in arr:
        currdist += sum(range(1, abs(num-i)+1))
    dists.append(currdist)

print(dists)
print(min(dists))