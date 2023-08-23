for _ in range(int(input())) :
    length = int(input())
    nums = list(sorted(map(int,input().split())))
    teamsCount = 0
    teamCount = 1
    maxi = float("-inf")
    index = 0
    while index < length :
        maxi = nums[index]
        if maxi <= teamCount : 
            teamsCount += 1
            maxi = float("-inf")
            teamCount = 1
            index += 1
        else :
            add = maxi - teamCount
            teamCount += add
            index += add
    print(teamsCount)