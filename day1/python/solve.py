import os 
import numpy as np
f = open(os.path.join(os.path.dirname(__file__), '../inputs'), 'r')
inputs = f.read().splitlines()
f.close()
inputs = list(map(int, inputs))
inputs = np.array(inputs)
def part1(inputs):
    return np.sum(np.array([inputs[i-1] < inputs[i] for i in range(len(inputs))]))

def part2(inputs):
    return part1(np.array([ inputs[i-2] + inputs[i-1] + inputs[i] for i in range(2,len(inputs))]))



print(f'Part 1: {part1(inputs)}\nPart 2: {part2(inputs)}')
