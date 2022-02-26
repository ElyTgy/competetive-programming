positions = []
folds = []

#for some reason the program wont work if there is the empty line between the numbers and the fold instructions, so remove them

for line in iter(input, '\n'):
    if line == "exit":
        break
    if "fold" in line:
        if "y" in line:
            folds.append(("y",int(line.split("=")[1])))
        elif "x" in line:
            folds.append(("x",int(line.split("=")[1])))
    else:
        x,y = line.split(",")
        positions.append((int(x), int(y)))

def fold_left_on(x_fold):
    for i,pos in enumerate(positions):
        #if to the rigth of the fold line
        if pos[0] > x_fold:
            new_x_pos = x_fold - (pos[0] - x_fold)
            positions[i] = (new_x_pos, positions[i][1])

def fold_up_on(y_fold):
    for i,pos in enumerate(positions):
        #if below the fold
        if pos[1] > y_fold:
            new_y_pos = y_fold - (pos[1] - y_fold)
            positions[i] = (positions[i][0], new_y_pos)

for fold in folds:
    if fold[0] == "x":
        fold_left_on(fold[1])
    else:
        fold_up_on(fold[1])

max_x = 0
max_y = 0
for x,y in positions:
    if x > max_x:
        max_x = x
    if y > max_y:
        max_y = y

print(max_x)
print(max_y)
grid = [["." for c in range(max_x+1)] for r in range(max_y+1)]

for c, r in positions:
    grid[r][c] = "X"

for line in grid:
    for el in line:
        print(el, end="")
    print()