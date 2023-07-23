for _ in range(int(input())) :
    
    length = int(input())
    nums = list(map(int,input().split()))
    
    countNumber = [0] * (length + 1)
    
    for num in nums :
        if num <= length : countNumber[num] += 1
       
    nDict = [0] * (length + 1)
    
    for index in range(1 , length + 1) :
        for number in range(index , length + 1 , index) :
            nDict[number] += countNumber[index]
            
    print(max(nDict))