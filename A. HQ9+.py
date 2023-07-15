letters = ["H" , "Q" , "9"]
text = input()
for letter in text :
    if letter in letters :
        exit(print("YES"))
print("NO")