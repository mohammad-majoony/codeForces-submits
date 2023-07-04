import math
for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    if nums[0] <= 2 : print(1)
    else :
        print(math.ceil((nums[0] - 2) / nums[1]) + 1)