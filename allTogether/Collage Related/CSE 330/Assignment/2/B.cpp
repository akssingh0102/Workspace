
import math
import os
import random
import re
import sys

# Complete the fibonacciModified function below.
n1, n2, n = map(int, input().split())
seq = [n1, n2]
if n <= 2:
    print(seq[n-1])
else:
    for i in range(n-2):
        seq.append(seq[-2] + seq[-1]**2)
    print(seq[-1])