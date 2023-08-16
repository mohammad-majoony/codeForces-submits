length = int(input())
nDict = {}

maxi = float("-inf")
mini = float("inf")

for num in map(int,input().split()) :
    if num not in nDict : nDict[num] = 1 
    else : nDict[num] += 1
    if num > maxi : maxi = num
    if num < mini : mini = num
    
count = (nDict[maxi] * (nDict[maxi] - 1)) // 2  if maxi == mini else nDict[maxi] * nDict[mini]
print(maxi - mini , count)