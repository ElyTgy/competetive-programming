N = int(input(""))
T = int(input(""))

treePoses = []

def Collides(r, c, length, trees=treePoses):
    for tree in trees:
        #if(tree[1] <= c+length):
            #print("-------")
            #print(tree)
            #print(str(c+length))
            #print("-------")
        if (tree[0] >= r and tree[0] <= r+length-1) and (tree[1] >= c and tree[1] <= c+length-1):
            #print(tree)
            return True
    return False

for i in range(T):
    r, c = (input("").split())
    treePoses.append([int(r)-1, int(c)-1])

def func():
    m = N
    for count in range(N):
        #print()
        #print(m)
        for r in range(N-m+1):
            for c in range(N-m+1):
                if not Collides(r, c, m):
         #           print(r)
          #          print(c)
                    return(m)
        m-=1
    
print(func())
    