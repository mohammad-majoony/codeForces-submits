for _ in range(int(input())) :
    length , pack , vacTime ,  patTime = map(int,input().split())
    nums = list(map(int,input().split()))
    
    res = 0
    mini = None
    count = 0
    maxi = None
    
    for num in nums :
        if mini == None or count + 1 > pack or num > maxi :
            res += 1
            mini = num + patTime
            maxi = mini + vacTime
            count = 1
        elif num <= maxi :
            count += 1 
    
    print(res)                