length , increase = list(map(int,input().split()))
cost = 0
nums = list(map(int,input().split()))
for index in range(1 , length) :
    if nums[index - 1] >= nums[index] :
        value = nums[index - 1] - nums[index] + 1
        count = (value // increase) + 1 if value % increase != 0 else (value // increase)
        nums[index] += increase * count 
        cost += count
print(cost)        