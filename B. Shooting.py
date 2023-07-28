length = int(input())
nums = list(map(int,input().split()))

nDict = {}
for index in range(length) :
    if nums[index] not in nDict : nDict[nums[index]] = [index] 
    else : nDict[nums[index]].append(index)

numsRever = set(reversed(sorted(nums)))

cans = 0 
cast = 0

for linumber in numsRever :
    for dictList in nDict[linumber] :
        cast += linumber * cans + 1
        cans += 1

print(cast)

for linumber in numsRever :
    for dictList in nDict[linumber] :
        print(dictList + 1 , end=" ")