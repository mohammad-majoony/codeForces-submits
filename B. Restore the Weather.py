for _ in range(int(input())) :
    length , k = map(int,input().split())
    
    li = [[0 , 0] for x in range(length)]
    
    num1 = list(map(int,input().split()))
    num2 = list(sorted(map(int,input().split())))
    
    
    for index in range(length) :
        li[index] = [index , num1[index]]
    li.sort(key=lambda x : x[1])
    
    for index in range(length) :
        li[index][1] = num2[index]
    
    li.sort(key=lambda x : x[0])
    
    for num in li : print(num[1] , end=" ")  
    print(end="\n")  