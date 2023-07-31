import math
for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    count = 0
    for index in range(length) :
        if index + 1 == nums[index] : count += 1 
        
    print(math.ceil(count / 2))