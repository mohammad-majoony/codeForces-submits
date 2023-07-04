for _ in range(int(input())) :
    nums = list(map(int,input().split()))  
    maximum = max(nums)
    indMaximum = nums.index(max(nums))
    count = 0
    
    if indMaximum > 1 :
        maximumL = max(nums[:2])
        for i in nums[2:] :
            if maximumL >= i : count += 1
        print("YES" if count >= 1 else "NO")
        
    else :
        maximumR = max(nums[2:])
        for i in nums[:2] :
            if maximumR >= i : count += 1
        print("YES" if count >= 1 else "NO")