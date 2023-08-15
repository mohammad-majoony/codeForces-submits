length = int(input())
tDict = {}
for time in range(length) :
    txt = input()
    if txt in tDict : tDict[txt] += 1
    else : tDict[txt] = 1
print(tDict[list(sorted(tDict , key= lambda x : tDict[x]))[-1]])