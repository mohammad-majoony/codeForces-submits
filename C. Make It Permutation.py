for _ in range(int(input())) :
    length , rm , add = map(int,input().split())
    nums = list(sorted(map(int,input().split())))
    
    shouldrm = (length - len(set(nums))) * rm  
    haveOne = add if nums[0] != 1 else 0
    nums.append(1)
    
    nums = list(sorted(set(nums)))
    length = len(nums)
    mini = rm * (length - 1)
    
    for index in range(1 , length) :
        rmAll = rm * (length - index - 1)
        addHere = add * (nums[index] - index - 1)
        cost = rmAll + addHere
        mini = min(cost , mini)
        
    print(mini + shouldrm + haveOne )