n , f = map(int,input().split())
flag = True
for index in range(n) :
    a , b = map(int,input().split())
    if flag :
        if f >= a and f >= b : f += max(a , b)
        elif f >= a : f += a
        elif f >= b : f += b
        else : flag = False
print("S" if flag else "N")