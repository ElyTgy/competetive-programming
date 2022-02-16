instruction = input("")
tightens = {}
loosens = {}

seperate = []

currStart = 0
for i,letter in enumerate(instruction):
    if  i+1 == len(instruction) or (letter.isnumeric() and instruction[i+1].isalpha()):
        seperate.append(instruction[currStart:i+1])
        currStart = i+1

for instruction in seperate:
   for i, letter in enumerate(instruction):
       if letter == "+":
           print(f"{instruction[0:i]} tighten {instruction[i+1:]}")
       if letter == "-":
           print(f"{instruction[0:i]} loosen {instruction[i+1:]}")

