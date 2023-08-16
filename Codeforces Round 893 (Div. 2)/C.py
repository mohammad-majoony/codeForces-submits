for _ in range(int(input())) :
    num = int(input())
    
    cheak = [0] * (num + 1) 
    
    print(1 , end=" ")
    
    for i in range(2 , num + 1) :
        if cheak[i] == 0 :
            j = i
            while j <= num :
                if cheak[j] == 0 :
                    print(j , end=" ")
                    cheak[j] = 1
                j += j
    print()