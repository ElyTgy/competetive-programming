samples = []
outputs = []

for line in iter(input, '\n'):
    if line == "exit":
        break
    sample, output = line.split(" | ")
    sample = sample.split(" ")
    output = output.split(" ")

    samples += sample
    outputs += output

count = 0
for num in outputs:
    if len(num) == 2 or len(num) == 4 or len(num) == 7 or len(num) == 3:
        count += 1

print(count)
