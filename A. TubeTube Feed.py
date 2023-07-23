for _ in range(int(input())) :
    length , t = list(map(int,input().split()))
    l1 = list(map(int,input().split()))
    l2 = list(map(int,input().split()))
    
    res = -1
    entertaiment = 0
    
    for index in range(length) :
        if index + l1[index] > t : continue
        if index > t : break
        else :
            if l2[index] > entertaiment : 
                entertaiment = l2[index] 
                res = index + 1 
        
    print(res)