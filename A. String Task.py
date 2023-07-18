insert = False
text = input()
block = ["a", "o", "y", "e", "u", "i"]
for letter in text :
    if letter.lower() not in block :
        print(f".{letter.lower()}",end="")