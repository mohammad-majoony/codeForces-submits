for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    print(((24 - nums[0]) * 60) - nums[1])