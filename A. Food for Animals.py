for _ in range(int(input())) :
    a , b , c , x , y = list(map(int,input().split()))
    x = 0 if x <= a else x - a 
    y = 0 if y <= b else y - b
    print("YES" if c - (x + y) >= 0 else "NO")