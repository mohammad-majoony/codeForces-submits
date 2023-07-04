for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    flag = True
    for i in nums :
        if i < 0 :
            flag = False
            break
    if flag : print(max(nums))
    else : print(min(nums))