for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    nums.sort()
    if len(set(nums)) == 1 : 
        print(-1)
        continue
    else :
        index = -1
        for ind in range(1 , length) :
            if nums[ind] != nums[ind - 1] : 
                index = ind
                break
        print(index , length - index)
        print(*nums[:index])
        print(*nums[index:])