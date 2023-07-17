length = int(input())
letters = list(input())

letterDict = {}

for index in range(length - 1) :
    word = f"{letters[index]}{letters[index + 1]}"
    if word in letterDict : letterDict[word] += 1
    else : letterDict[word] = 1   

word = ""
wordCount = 0
for key,count in letterDict.items() :
    if count > wordCount :
        word = key
        wordCount = count

print(word)