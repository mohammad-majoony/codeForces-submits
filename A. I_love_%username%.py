count , len = 0 , int(input())
nums = list(map(int,input().split()))
max = min = nums[0]
for num in nums :
    if num > max : 
        max = num
        count += 1
    elif num < min :
        min = num
        count += 1
print(count)