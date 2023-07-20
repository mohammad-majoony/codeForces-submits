for _ in range(int(input())) :
    
    length = int(input())
    text = input()
    letterDict = {}
    
    flag = True
    
    for index in range(len(text) - 1) :
        if index != length - 2 :
            if index != length - 3 : 
                if text[index] == text[index + 2] and text[index + 1] == text[index + 3] :
                    print("YES")
                    flag = False
                    break
            if text[index] == text[index + 1] == text[index + 2] : continue
        letter = f"{text[index]}{text[index + 1]}" 
        if letter in letterDict : 
            print("YES")
            flag = False
            break
        letterDict[letter] = 1
    
    if flag : print("NO")