import math
for _ in range(int(input())) :
    base , num = list(map(int,input().split()))
    w = math.ceil(base / num)
    print(num * w - base)