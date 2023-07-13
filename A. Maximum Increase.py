length = int(input())
nums = list(map(int,input().split()))
count = 0
mincreasing = 0
for index in range(1 , length):
    if nums[index - 1] < nums[index] : count += 1
    else :
        if count > mincreasing : mincreasing = count 
        count = 0
print(count + 1 if count > mincreasing else mincreasing + 1)