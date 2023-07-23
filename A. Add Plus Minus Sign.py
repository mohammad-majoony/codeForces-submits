for _ in range(int(input())) :
    length = int(input())
    text = input()
    one = False
    mines = False
    
    for index in range(length - 1) :
        if text[index] == text[index + 1] == "0" : 
            print("+",end="")
        elif text[index] == text[index + 1] == "1" : 
            if mines :
                print("+",end="")
                one = True
                mines = False
            else :
                print("-",end="")
                one = False
                mines = True
        elif text[index] == "0" and text[index + 1] == "1" :
            if one and not mines :
                one = False
                mines = True
                print("-",end="")
            else : 
                one = True
                mines = False
                print("+",end="")
        elif text[index] == "1" and text[index + 1] == "0" : 
            if not mines :
                one = True 
            else : 
                mines = False
            print("+",end="")
            
    print(end="\n")
        