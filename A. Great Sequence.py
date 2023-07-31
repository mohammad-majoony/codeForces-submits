for _ in range(int(input())) :
    length , x = map(int,input().split())
    nums = list(map(int,input().split()))
    nDict = {}
    count = 0
    
    for num in nums :
        if num not in nDict : nDict[num] = 1
        else : nDict[num] += 1
    
    for num in sorted(nums) :
        if nDict[num] > 0 : 
            if (num * x) not in nDict or nDict[num * x] <= 0 : 
                count += 1
            else :
                nDict[num * x] -= 1
            nDict[num] -= 1
    print(count)