for _ in range(int(input())) :
    length = int(input())
    
    num1 = list(map(int,input().split()))
    num2 = list(map(int,input().split()))
    
    ind1 = -1 
    ind2 = -1
    
    for index in range(length) :
        if num1[index] != num2[index] : 
            if ind1 == -1 : ind1 = index + 1
            else : ind2 = index + 1
    
    maxi = max(num1[ind1-1:ind2])
    mini = min(num1[ind1-1:ind2])
    
    for index in range(ind1 - 2 , -1 , -1) :
        if num1[index] == num2[index] and num1[index] <= mini : 
            ind1 = index + 1
            mini = num1[index]
        else : break
        
    for index in range(ind2 , length) :
        if num1[index] == num2[index] and num1[index] >= maxi : 
            ind2 = index + 1
            maxi = num1[index]
        else : break
        
    print(ind1 , ind2)