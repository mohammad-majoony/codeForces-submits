import math
for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    a , b = min(nums) , max(nums)
    print(math.ceil((b - a) / 10))