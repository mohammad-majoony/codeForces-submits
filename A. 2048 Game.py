for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    
    dict2048 = {
        1 : 0 ,
        2 : 0 ,
        4 : 0 ,
        8 : 0 ,
        16 : 0 ,
        32 : 0 ,
        64 : 0 ,
        128 : 0 ,
        256 : 0 ,
        512 : 0 ,
        1024 : 0 ,
        2048 : 0 ,
    }
    index = 0
    
    while index < length and dict2048[2048] == 0 :
        if nums[index] > 2048 :
            index += 1
            continue
        dict2048[nums[index]] += 1
        index += 1
        for key , value in dict2048.items() :
            if value >= 2 : 
                dict2048[key] = 0
                dict2048[key * 2] += 1
                
    print("NO" if dict2048[2048] == 0 else "YES")  
