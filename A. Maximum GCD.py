def gcdCalculator(a , b) :
    if a % b == 0 : return b
    return gcdCalculator(b , a % b)

import math

for _ in range(int(input())) :
    num = int(input())
    print(math.ceil(num / 2) if num % 2 == 0 else num // 2)  