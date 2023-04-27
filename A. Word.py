word = input()
lower = upper = 0
for let in word :
    if let.isupper() : upper += 1
    else : lower += 1
print(word.upper()) if upper > lower else print(word.lower())