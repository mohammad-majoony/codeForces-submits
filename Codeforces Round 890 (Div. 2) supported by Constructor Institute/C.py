for _ in range(int(input())) :
    n , k = map(int,input().split())
    nums = list(map(int,input().split()))
    
    index = 0
    while index <  n - 1 and k > 0 :
        if nums[index] < nums[index + 1] :
            dif = nums[index + 1] - nums[index]
            if k >= dif * (index + 1) :
                nums[index] += dif
                k -= dif * (index + 1)
            else :
                nums[index] += k // (index + 1)
                break
        index += 1
    print(nums)
    print(max(nums) , "ans")