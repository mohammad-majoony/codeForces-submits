length = int(input())
nDict = {
    25 : 0 ,
    50 : 0 ,
    100 : 0 
}
for num in map(int,input().split()) :
    if num == 25 : nDict[25] += 1
    elif num == 50 : 
        nDict[25] -= 1
        if nDict[25] < 0 : quit(print("NO"))
        nDict[50] += 1
    else :
        if nDict[50] and nDict[25] :
            nDict[50] -= 1
            nDict[25] -= 1
        elif nDict[25] :
            nDict[25] -= 3
            if nDict[25] < 0 : quit(print("NO"))
        else :
            quit(print("NO"))
        nDict[100] += 1
print("YES")