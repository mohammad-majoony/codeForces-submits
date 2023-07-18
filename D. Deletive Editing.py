for _ in range(int(input())) :
    inp = input()
    spaceIndex = inp.index(" ")
    
    text = inp[:spaceIndex]
    word = inp[spaceIndex+1:]
    
    letterIndex = {}

    for index in range(len(text)) :
        letter = text[index]
        if letter in word :
            if letter in letterIndex :
                letterIndex[letter] = letterIndex[letter] + [index]
            else :
                letterIndex[letter] = [index]
                
    flag = True
    last = -1
    
    
    for index in range(len(word)) :
        if word[index] not in letterIndex :
            flag = False
            break
        count = -(word[index:].count(word[index]))
        try :
            if letterIndex[word[index]][count] > last : 
                last = letterIndex[word[index]][count]
            else :
                flag = False
                break
        except:
            flag = False
            break
    
    print("YES" if flag else "NO")