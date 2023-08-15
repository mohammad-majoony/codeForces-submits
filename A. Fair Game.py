length = int(input())
nDict = {}
for test in range(length) :
    num = int(input())
    if num not in nDict : nDict[num] = 1
    else : nDict[num] += 1
li = list(nDict)
if len(li) != 2 or nDict[li[0]] != nDict[li[1]]: quit(print("NO"))
print("YES")
print(li[0] , li[-1])