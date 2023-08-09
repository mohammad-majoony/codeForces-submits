for _ in range(int(input())) :
    x = int(input())
    flag = True
    num = x
    while x > 0 :
        if num == x ^ ((num * 2) - x) : 
            print((num * 2) - x , x)
            flag = False
            break
        x //= 2
    if flag : print(-1)