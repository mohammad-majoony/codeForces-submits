for _ in range(int(input())) :
    a , b , c = list(map(int,input().split()))
    mini = a if a < b else b
    maxi = a if a > b else b
    number_count = (maxi - mini) * 2
    if a > number_count or b > number_count or c > number_count : 
        print(-1)
    else :
        if c > maxi :
            res = mini + (c - maxi)
        else :
            res = maxi + (c - mini)
        print(res if res <= number_count else res - number_count)