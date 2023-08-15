for _ in range(int(input())) :
    length = int(input())
    nums  = {}
    for people in range(length) :
        liLen = input()
        for num in map(int,input().split()) :
            nums[num] = people
    res = [-1] * length
    for key , value in nums.items() :
        res[value] = key
    if -1 not in res : print(*res)
    else : print(-1)