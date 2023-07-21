for _ in range(int(input())) :
    a0 , a1 = list(map(int,input().split()))
    b0 , b1 = list(map(int,input().split()))
    c0 , c1 = list(map(int,input().split()))
    
    position = [[a0 , a1] , [b0 , b1] , [c0 , c1] , [a0 , b1] , [a0 , c1] , [b0 , a1] , [b0 , c1] , [c0 , a1] , [c0 , b1]]
    result = [[0 , 0] for x in range(9)]
    
    index = 0
    for pos in position :
        distanse = [abs(a0 - pos[0]) + abs(a1 - pos[1]) , abs(b0 - pos[0]) + abs(b1 - pos[1]) , abs(c0 - pos[0]) + abs(c1 - pos[1])]
        result[index][0] = sum(distanse)
        result[index][1] = distanse[0]
        index += 1        

    smallPath  = result[0][0] 
    maxNumber = result[0][1]
    
    for a , b in result :
        if a < smallPath : 
            smallPath = a 
            maxNumber = b
        elif a == smallPath and maxNumber > b : maxNumber = b
        
    print(maxNumber + 1)