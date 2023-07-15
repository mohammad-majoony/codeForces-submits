length = int(input())
nums = list(map(int,input().split()))
count = 1
maxCount = 0
for index in range(1 , length) :
    if nums[index] >= nums[index - 1] : count += 1 
    else : 
        if count > maxCount : maxCount = count
        count = 1
print(maxCount if maxCount > count else count)