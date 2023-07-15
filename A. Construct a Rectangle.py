for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    nums.sort()
    if (nums[2] == sum(nums) - nums[2]) or  (nums[2] == nums[1] and nums[0] % 2 == 0) or (nums[0] == nums[1] and nums[2] % 2 == 0) :
        print("YES")
    else : print("NO")
    