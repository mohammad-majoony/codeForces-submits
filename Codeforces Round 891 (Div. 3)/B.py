for _ in range(int(input())) :
    num = list(input())
    length = len(num)
    ind = -1
    
    for index in range(length - 1 , 0 , -1) :
        if int(num[index]) >= 5 : num[index - 1] = int(num[index - 1]) + 1
    for index in range(length) :
        if int(num[index]) >= 5 : 
            ind = index
            break
    if ind == -1 : print("".join(num))
    elif ind == 0 : print(10 ** length)
    else :
        for i in range(length) :
            if i < index : print(num[i],end="")
            else : print(0,end="")
        print()