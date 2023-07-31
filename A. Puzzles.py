n , length = map(int,input().split())
nums = list(sorted(map(int,input().split())))
mini = float("inf")

for index in range(length - n + 1) :
    res = nums[index + n - 1] - nums[index]
    if res < mini : mini = res
    
print(mini)