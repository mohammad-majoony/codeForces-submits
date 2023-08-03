x1 , y1 , x2 , y2 = map(int,input().split())
if x1 == x2 :
    if -1000 <= x1 + abs(y1 - y2) <= 1000 :
        x3 = x4 = x1 + abs(y1 - y2)
        y3 = min(y1 , y2)
        y4 = max(y1 , y2)
        print(x3 , y3 , x4 , y4)
    else :
        x3 = x4 = x1 - abs(y1 - y2)
        y3 = min(y1 , y2)
        y4 = max(y1 , y2)
        print(x3 , y3 , x4 , y4)   
    
elif y1 == y2 :
    if -1000 <= y1 + abs(x1 - x2) <= 1000 :
        y3 = y4 = y1 + abs(x1 - x2)
        x3 = min(x1 , x2)
        x4 = max(x1 , x2)
        print(x3 , y3 , x4 , y4)
    else :
        y3 = y4 = y1 - abs(x1 - x2)
        x3 = min(x1 , x2)
        x4 = max(x1 , x2)
        print(x3 , y3 , x4 , y4)
elif abs(x1 - x2) == abs(y1 - y2) and x1 != x2 :
    x3 = x1
    y3 = y2
    x4 = x2 
    y4 = y1
    print(x3 , y3 , x4 , y4)
else : print(-1)