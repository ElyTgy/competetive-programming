from collections import Counter
from time import time

start = time()

class Polymers:
    def __init__(self, inp: str, combs: list):
        self.map = Counter()
        for i in range(len(inp)-1):
            self.map[inp[i:i+2]] += 1
        self.combMap = {}
        for line in combs:
            self.combMap[line[:2]] = line[-1]
        self.first_elem = inp[0]

    def step(self):
        for mol, amount in list(filter(lambda x: x[1] > 0, list(self.map.items()))):
            if mol[:2] not in self.combMap.keys():
                continue
            new_atom = self.combMap[mol[:2]]
            self.map[mol] -= amount
            self.map[mol[0]+new_atom] += amount
            self.map[new_atom+mol[1]] += amount

    def get_frequencies(self):
        most_frequent = Counter()
        for mol, amount in self.map.items():
            most_frequent[mol[1]] += amount
        most_frequent[self.first_elem] += 1

        return most_frequent


template, _, *inp = open("input.txt").read().split("\n")
polymer = Polymers(template, inp)

for _ in range(40):
    polymer.step()

frequencies = polymer.get_frequencies()
print(max(frequencies.values()) - min(frequencies.values()))
print(time() - start)