for _ in range(int(input())) :
    length = input()
    nums = list(sorted(map(int,input().split())))
    print(nums[0] * nums[1] if (nums[0] * nums[1]) > (nums[-1] * nums[-2]) else nums[-1] * nums[-2])