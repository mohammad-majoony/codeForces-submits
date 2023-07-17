for _ in range(int(input())) :
    n , c = list(map(int,input().split()))
    nums = list(map(int,input().split()))
    dict = {}
    for pelanet in nums :
        if pelanet in dict : dict[pelanet] += 1
        else : dict[pelanet] = 1
    cost = 0
    for count in dict.values() :
        if count < c : cost += count
        else : cost += c
    print(cost)