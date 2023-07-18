goalDict = {}
for _ in range(int(input())) :
    inp = input()
    if inp in goalDict : goalDict[inp] += 1
    else : goalDict[inp] = 1
    
print(max(goalDict , key=goalDict.get))