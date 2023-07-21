for _ in range(int(input())) :
    
    length , k = list(map(int,input().split())) 
    nums = sorted(list(map(int,input().split())))
    maxi = 0
    i = 0
    while i < length - 1 : 
        maxH = 1
        for j in range(i, length - 1) :
            if nums[j + 1] - nums[j] <= k : 
                maxH += 1
            else : break
        if maxi < maxH : maxi = maxH
        if maxi >= length - i or j == length - 1 : break
        
        i = j + 1
        
    print(length - maxi if length != 1 else 0) 