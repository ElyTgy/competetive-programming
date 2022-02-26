from collections import defaultdict

# first array is musts, seconds array is must nots
def f():
    return [[],[]]

students = defaultdict(f)
violations = 0

#musts
x = int(input(""))
for i in range(x):
    s1, s2 = input("").split()
    students[s1][0].append(s2)
    students[s2][0].append(s1)

#must nots
y = int(input(""))
for i in range(y):
    s1, s2 = input("").split()
    students[s1][1].append(s2)
    students[s2][1].append(s1)

g = int(input(""))
for i in range(g):
    group = input("")
    s1, s2, s3 = group.split()
    if s1 in students:
        if s2 in students[s1][1]:
            violations += 1
            #print(f"{violations}: in group {group} (31)")
            #print(f"{s1} and {s2} ARENT supposed to be in the same group, but they are")
            #print("")
        if s3 in students[s1][1]:
            violations += 1
            #print(f"{violations}: in group {group} (36)")
            #print(f"{s1} and {s3} ARENT supposed to be in the same group, but they are")
            #print("")
        for name in students[s1][0]:
            if name != s2 and name != s3:
                violations += 1
                students[name][0].remove(s1)
                #print(f"{violations}: in group {group} (42)")
                #print(f"{s1} and {name} ARE supposed to be in the same group, but they arent")
                #print("")
    if s3 in students:
        if s2 in students[s3][1]:
            violations += 1
            #print(f"{violations}: in group {group} (48)")
            #print(f"{s2} and {s3} ARENT supposed to be in the same group, but they are")
            #print("")
        for name in students[s3][0]:
            if name != s2 and name != s1:
                violations += 1
                students[name][0].remove(s3)
                #print(f"{violations}: in group {group} (54)")
                #print(f"{s3} and {name} ARE supposed to be in the same group, but they arent")
                #print("")
    if s2 in students:
        for name in students[s2][0]:
            if name != s3 and name != s1:
                violations += 1
                students[name][0].remove(s2)
                #print(f"{violations}: in group {group} (61)")
                #print(f"{s2} and {name} ARE supposed to be in the same group, but they arent")
                #print("")

print(violations)