n , m = map(int,input().split())
nums = list(map(int,input().split()))
last = 1
count = 0
for index in range(m) :
    if nums[index] != last :
        if last < nums[index] : 
            count += nums[index] - last
            last = nums[index]
        else : 
            count += (n - last) + (nums[index])
            last = nums[index]
print(count)