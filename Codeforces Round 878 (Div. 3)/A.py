for _ in range(int(input())) : 
    length = int(input())
    text = list(input())
    let = ""
    i = 0 
    while(i < length) :
        if i == 0 : let = text[i]
        else :
            if let == text[i] :
                print(text[i] , end="")
                try :
                    let = text[i + 1]
                except :
                    break
                i += 1
        i += 1
    print("")
