for _ in range(int(input())) :
    num = list(map(int,input().split())) 
    if num[0] + num[1] >= 10 : print("YES")
    elif num[0] + num[2] >= 10 : print("YES")
    elif num[1] + num[2] >= 10 : print("YES")
    else : print("NO")