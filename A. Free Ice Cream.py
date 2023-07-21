pCount , iCount = list(map(int,input().split()))

sadPpl = 0

for _ in range(pCount) :
    info = input()
    operator = info[:1]
    num = int(info[2:])
    if operator == "+" : iCount += num 
    else :
        if iCount >= num:
            iCount -= num
        else :
            sadPpl += 1
            
print(iCount , sadPpl)