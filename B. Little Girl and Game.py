li = list(input())
nDict = {}
for letter in li :
    if letter not in nDict : nDict[letter] = 1
    else : nDict[letter] += 1
count = 0
for num in nDict.values() : count += (num % 2) * num
print("First" if count % 2 != 0 or count == 0 else "Second")