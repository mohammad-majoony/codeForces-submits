for _ in range(int(input())) :
    nums = list(map(int,input().split())) 
    n = nums[3]
    nums = nums[:3]
    nums.sort()
    result = n - (nums[2] - nums[1]) - (nums[2] - nums[0])
    print("YES" if result >= 0 and result % 3 == 0 else "NO")