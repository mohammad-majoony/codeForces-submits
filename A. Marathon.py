for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    count = 0
    for i in range(4) : 
        if nums[0] < nums[i] : count += 1
    print(count)
    