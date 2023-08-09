for _ in range(int(input())) :
    lenght = int(input())
    nums = list(map(int,input().split()))
    res = [0] * lenght
    res[0] = nums[0]
    for index in range(1 , lenght - 1) :
        res[index] = min(nums[index] , nums[index - 1])
    
    res[-1] = nums[-1]
    print(*res)