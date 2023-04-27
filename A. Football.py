inp = input()
word = inp[:1]
count = 1
flag = True
for let in inp :
    if let == word : count += 1
    else :
        word = let
        count = 1
    if count == 7 : 
        flag = False
        break
if flag : print("NO")
else : print("YES")