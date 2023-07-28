text = input()
word = ["h" , "e" , "i" , "d" , "i"]
index = -1
flag = True
for letter in word :
    text = text[index+1:]
    index = text.find(letter)
    if index == -1 :
        flag = False
        break
print("YES" if flag else "NO")