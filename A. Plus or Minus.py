for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    print("+" if nums[0] + nums[1] == nums[2] else "-")