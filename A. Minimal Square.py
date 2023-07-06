for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    maxi = max(nums)
    mini = min(nums)
    if maxi == (mini * 2) : print(maxi ** 2)
    else :
        if (mini * 2) > maxi : print((mini * 2) ** 2)
        else : print((maxi) ** 2)
    
    