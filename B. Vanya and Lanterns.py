length , l = map(int,input().split())
nums = list(sorted(map(int,input().split())))
maxi = max(nums[0] - 0 , l - nums[-1])
for index in range(1 , length) :
    maxi = max(maxi , (nums[index] - nums[index - 1]) / 2)
print(maxi)