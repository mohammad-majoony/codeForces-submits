length = int(input())
nums = list(map(lambda x : int(x) % 2,input().split()))
ans = 1 if nums.count(0) > nums.count(1) else 0
print(nums.index(ans) + 1)