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

arr.sort()
centers = median(arr)

prevdistcount = float('inf')
distcount = 0
for center in centers:
    distcount = 0
    for num in arr:
        distcount += abs(num-center)
    if distcount < prevdistcount:
        prevdistcount = distcount

print(distcount)