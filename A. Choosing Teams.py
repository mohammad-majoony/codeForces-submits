n , k = list(map(int,input().split()))
nums = list(map(int,input().split()))
nums.sort()
count = index = 0
while(n - 1 >= index + 2) :
    if nums[index + 2] + k <= 5 : count += 1
    index += 3
print(count)