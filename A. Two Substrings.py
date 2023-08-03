text = list(input())
length = len(text) 
ba = []
ab = []
for index in range(1 , length) :
    if text[index] + text[index - 1] == "BA" :
        ba.append(index)
    elif text[index] + text[index - 1] == "AB" :
        ab.append(index)
    
if ba and ab :
    for i in ba :
        for j in ab :
            if abs(i - j) > 1 :
                quit(print("YES"))    
print("NO")