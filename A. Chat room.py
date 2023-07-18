text = input()

def founder(index , letter) :
    return text[index:].find(letter)

letters = ["h" , "e" , "l" , "l" , "o"]
index = 0

for letter in letters :
    found = founder(index , letter)
    if found == -1 : 
        quit(print("NO"))
    index += found + 1

print("YES")