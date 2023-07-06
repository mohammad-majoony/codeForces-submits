for _ in range(int(input())) :
    def get() : return list(map(int,input().split()))
    length , swap = get()
    num1 = get()
    num2 = get()
    
    num1.sort()
    num2.sort()

    for i in range(length - 1 , -1 , -1) :
        if swap == 0 : break
        swap -= 1 
        if num2[i] > num1[length - i - 1] : num1[length - i - 1] = num2[i]
        else : break
        
    print(sum(num1))
        
        
    