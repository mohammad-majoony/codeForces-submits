n , k = map(int,input().split())
nums = list(sorted(map(int,input().split())))

if k == 0 : print(-1 if nums[0] == 1 else 1)
elif k == n : print(nums[n - 1])
else : print(-1 if nums[k] - nums[k - 1] == 0 else nums[k - 1])