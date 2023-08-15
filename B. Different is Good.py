length = int(input())
lDict = {}
text = input()
if length > 26 : quit(print(-1))
count = 0
for letter in text :
    if letter not in lDict : lDict[letter] = 1
    else :
        count += 1
print(count)