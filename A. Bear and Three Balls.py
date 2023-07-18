length = input()
nums = list(set(sorted(list(map(int,input().split())))))
for index in range(len(nums) - 2) :
    a = abs(nums[index] - nums[index + 1])
    b = abs(nums[index + 1] - nums[index + 2])
    c = abs(nums[index] - nums[index + 2])
    if a <= 2 and b <= 2 and c <= 2 : exit(print("YES"))
print("NO")