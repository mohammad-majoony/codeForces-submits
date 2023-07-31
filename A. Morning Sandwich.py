for _ in range(int(input())) :
    b , c , h = map(int,input().split())
    b -= 2 
    other = c + h
    if b >= other : print(2 + (other * 2) - 1)
    elif other > b : print(2 + ((b + 1) * 2) - 1)