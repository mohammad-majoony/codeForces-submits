import math
for _ in range(int(input())) :
    length , sums = list(map(int,input().split()))  
    count = (length // 2) + 1 if length % 2 == 0 else math.ceil(length / 2)
    print(sums // count)