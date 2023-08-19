for _ in range(int(input())) :
    length = int(input())
    nDict = {}
    nums = list(map(int,input().split()))
    for index in range(length) :
        key = nums[index] - index 
        if key in nDict : nDict[key] += 1
        else : nDict[key] = 1
    res = 0
    for val in nDict.values() :
        res += (val - 1) * (val) // 2
    print(res) 