length = int(input())
nums = list(map(int,input().split()))
nDict = {
    1 : 0 ,
    2 : 0 ,
    3 : 0 ,
}

count = 0

for num in nums :
    if num == 4 : count += 1
    else : nDict[num] += 1

mini = min(nDict[1] , nDict[3])
count += mini + (nDict[3] - mini)
nDict[1] -= mini  

nDict[2] += nDict[1] // 2

if nDict[2] % 2 == 1 : count += 1
if nDict[1] % 2 == 1 and nDict[2] % 2 == 0 : count += 1 

count += nDict[2] // 2

print(count)