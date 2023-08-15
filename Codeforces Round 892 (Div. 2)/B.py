for _ in range(int(input())) :
    games = int(input())
    li = [[0,0] for i in range(games)] 
    mini = float("inf")
    for game in range(games) :
        length = input()
        nums = list(sorted(map(int,input().split())))
        li[game][0] = nums[0]
        li[game][1] = nums[1]
        if nums[0] < mini : mini = nums[0]

    li.sort(key = lambda x : x[1])
    count = mini
    for index in range(1 , games) : count += li[index][1]
    
    print(count)