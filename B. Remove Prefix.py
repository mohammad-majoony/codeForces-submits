for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    numberDict = {}
    flag = True
    for index in range(length - 1 ,-1 , -1) :
        if nums[index] in numberDict :
            flag = False
            print(index + 1)
            break
        else :
            numberDict[nums[index]] = 1
    if flag : print(0)