for _ in range(int(input())) :
    length = int(input())
    text = list(input())        
    
    res1 = [0] * length
    nDict1 = {text[0] : 1}
    res1[0] = 1
    for index in range(1 , length) :
        key = text[index]
        if key not in nDict1 :
            nDict1[key] = 1
            res1[index] = res1[index - 1] + 1
        else : res1[index] = res1[index - 1]
        
    res2 = [0] * length
    nDict2 = {text[-1] : 1}
    res2[-1] = 1
    
    for index in range(length - 2 , -1 , -1) :
        key = text[index]
        if key not in nDict2 :
            nDict2[key] = 1
            res2[index] = res2[index + 1] + 1
        else : res2[index] = res2[index + 1]
        
    maxi = 0
        
    for index in range(length - 1) :
        maxi = max(maxi , res1[index] + res2[index + 1])
        
    print(maxi)