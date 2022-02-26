
arr = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    arr += line.split(",")

arr = [int(num) for num in arr]

for i in range(80):
    newcount = 0
    for i, num in enumerate(arr):
        if num == 0:
            arr[i] = 6
            newcount += 1
        else:
            arr[i] -= 1
    newarr = [8 for i in range(newcount)]
    arr += newarr
    print(arr)

print(len(arr))