for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    sortNums = sorted(nums)
    flag = True
    for index in range(length) :
        if nums[index] % 2 != sortNums[index] % 2 : 
            flag = False
            break
    print("YES" if flag else "NO")