flag = True
for _ in range(int(input())) :
    price , qaulity = map(int,input().split())
    if flag :
        if price != qaulity :
            print("Happy Alex")
            flag = False
if flag : print("Poor Alex")