length = int(input())
nums = list(map(int,input().split()))
count = 0

manfi = [0] * length 
mosbat = [0] * length
manfiCount = mosbatCount = zeroCount = 0

for num in nums :
    if num < 0 :
        manfi[manfiCount] = num
        manfiCount += 1
    elif num > 0 :
        mosbat[mosbatCount] = num
        mosbatCount += 1
    else :
        zeroCount += 1
        

a = abs(sum(manfi)) - manfiCount
b = abs(sum(mosbat)) - mosbatCount
c = zeroCount

if zeroCount != 0 and manfiCount % 2 == 1 : print(a + b + c) 
elif zeroCount == 0 and manfiCount % 2 == 1 : print(a + b + 2)
else : print(a + b + c) 