for _ in range(int(input())) :
    monsterCount , damage = map(int,input().split())
    health = list(map(int,input().split()))
    
    order = [[0 , 0] for x in range(monsterCount)]
    for index in range(monsterCount) :
        order[index][0] = damage if health[index] % damage == 0 else health[index] % damage
        order[index][1] = index + 1
    order.sort(key= lambda x : (-x[0] , x[1]))
    
    for li in order : print(li[1] , end=" ")
    print(end="\n")