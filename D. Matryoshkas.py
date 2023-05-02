for test in range(int(input())) :
    
    lenght = int(input())
    nums = sorted([int(x) for x in input().split()])
    
    countainer = {}
    count = 0
    for num in nums :
        if num in countainer and countainer[num] :
            if num + 1 in countainer :
                countainer[num + 1] += 1
            else :
                countainer[num + 1] = 1
            countainer[num] -= 1
        elif num in countainer and countainer[num] == 0 :  
            count += 1
            if num + 1 in countainer:
                countainer[num + 1] += 1
            else:
                countainer[num + 1] = 1
        else:
            count += 1
            if num + 1 in countainer :
                countainer[num + 1] += 1
            else:
                countainer[num + 1] = 1
          
    print(count)      