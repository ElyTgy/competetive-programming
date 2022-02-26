positions = []
#y_folds = []
#x_folds = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    #if line == "\n":
    #    continue
    #if "fold" in line:
    #    if "y" in line:
    #        y_folds.append(line.split("=")[1])
    #    elif "x" in line:
    #        x_folds.append(line.split("=")[1])
    #else:
    x,y = line.split(",")
    positions.append((int(x), int(y)))

def fold_left_on(x_fold):
    for i,pos in enumerate(positions):
        #if to the rigth of the fold line
        if pos[0] > x_fold:
            new_x_pos = x_fold - (pos[0] - x_fold)
            positions[i] = (new_x_pos, positions[i][1])
            

fold_left_on(655)
d = {}
for pos in positions:
    if pos in d:
        d[pos] += 1
    else:
        d[pos] = 1

print(len(d))