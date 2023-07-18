k = int(input())
text = input()
length = len(text)
textSet = set(text)

if length // k != length / k : exit(print(-1)) 

dictLetter = {}

count = length // k 

for letter in textSet :
    if letter in dictLetter : continue
    letterCount = text.count(letter)
    if letterCount / k != letterCount // k : exit(print(-1))
    else : 
        if letter not in dictLetter :
            dictLetter[letter] = letterCount // k
    

word = ""
for key , value in dictLetter.items() :
    word += key * value
    

for _ in range(k) : print(word,end="")