vowel = ["a", "o", "u", "i","e"]

text = input()

if text[-1] != "n" and text[-1] not in vowel : exit(print("NO"))

for index in range(len(text) - 1) :
    if text[index] == "n" or text[index] in vowel : continue
    else : 
        if text[index + 1] not in vowel : exit(print("NO"))
        
print("YES")