import math
for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    pos = neg = 0
    
    for num in nums :
        if num > 0 : pos += 1
        else : neg += 1
        
    cost = 0
    
    if neg > pos :
        compare = math.ceil(length / 2) - pos
        cost += compare 
        pos += compare
        neg -= compare
    
    print(cost + 1 if neg % 2 == 1 else cost)