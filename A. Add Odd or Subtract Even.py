for _ in range(int(input())) :
    a , b = list(map(int,input().split()))
    if a == b : print(0)
    elif a < b :
        res = b - a 
        if res % 2 == 1 : print(1)
        else : print(2)
    else :
        res = a - b 
        if res % 2 == 1 : print(2)
        else : print(1)