length = int(input())
nums = list(map(int,input().split()))
home = 1
count = 0
for index in range(length) :
    if nums[index] == 1 : 
        count += 1
        home = 0
    elif home == 1 and nums[index] == 0 : continue
    else :
        if index == length - 1 : count += nums[index]
        elif nums[index] == nums[index + 1] : home = 1 
        elif nums[index] != nums[index + 1] : count += 1 

print(count)