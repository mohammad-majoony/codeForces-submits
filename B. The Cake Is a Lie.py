for _ in range(int(input())) :
    a , b , n = list(map(int,input().split()))
    max = a if a > b else b
    min = a if a < b else b
    res = (min - 1)  + ((max - 1) * min)
    print("YES" if n == res else "NO")