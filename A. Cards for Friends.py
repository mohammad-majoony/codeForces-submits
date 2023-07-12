for _ in range(int(input())) :
    w , h , n = list(map(int,input().split()))
    if h % 2 == 1 and w % 2 == 1 : n -= 1
    elif h % 2 == w % 2 == 0 : 
        maxi = w if w > h else h
        mini = w if w < h else h
        resmax = resmin = 1
        while maxi % 2 == 0 :
            resmax *= 2
            maxi //= 2
        while mini % 2 == 0 :
            resmin *= 2
            mini //= 2
        n -= resmax * resmin
    else :
        res = 1
        while w % 2 == 0 :
            res *= 2
            w //= 2
        while h % 2 == 0 :
            res *= 2
            h //= 2
        n -= res
    print("YES" if n <= 0 else "NO")
    