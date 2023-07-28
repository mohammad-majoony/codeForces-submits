for _ in range(int(input())) :
    length = input()
    nums = list(map(int,input().split()))
    nDict = {}
    flag = True
    for num in nums :
        if num not in nDict : nDict[num] = 1
        else : 
            nDict[num] += 1
            if nDict[num] == 3 :
                flag = False
                print(num)
                break
    if flag : print(-1)