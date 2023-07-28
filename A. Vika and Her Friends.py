for _ in range(int(input())) :
    
    n , m , k = list(map(int,input().split()))
    x , y = list(map(int,input().split()))
    
    nums = [0] * (k * 2)
    flag = True
    
    for index in range(0 , k * 2 , 2) :
        x1 , y1 = list(map(int,input().split()))
        if (y1 + x1) % 2 == (y + x) % 2 : flag = False
        
    print("YES" if flag else "NO")        