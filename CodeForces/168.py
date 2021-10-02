#n = int(input())
#x = int(input())
#y = int(input())
inp = list(map(int,input().split()))
minXNeeded = int(inp[2]/100*inp[0])
if inp[2]*inp[0] % 100 != 0:
    minXNeeded = minXNeeded+1
if inp[1] >= minXNeeded:
    print("0")
else:
    print(str(minXNeeded-inp[1]))