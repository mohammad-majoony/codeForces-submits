for _ in range(int(input())) :
    n , b = list(map(int,input().split()))
    if n % 2 == 0 : print("YES")
    elif b % 2 == 1 : print("YES")
    else : print("NO")