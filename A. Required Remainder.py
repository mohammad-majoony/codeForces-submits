for _ in range(int(input())) :
    x , y , n = list(map(int,input().split()))
    mod = n % x
    div = n // x
    if mod < y :
        print(x * (div - 1) + y)
    elif mod > y :
        print(x * div + y)
    else :
        print(n)