count = int(input())
nums = list(map(int,input().split()))
sums = sum(nums)

if count > sums : count -= (count // sums) * sums

if count == 0 : 
    for index in range(len(nums) - 1 , -1 , -1) :
        if nums[index] != 0 : quit(print(index + 1))

for index in range(len(nums)) :
    count -= nums[index]
    if count <= 0 : quit(print(index + 1))