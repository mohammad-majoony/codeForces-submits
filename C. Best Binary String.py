for _ in range(int(input())) :
    text = input()
    if text[0] == "?" :
        zero = text.find("0") 
        one = text.find("1") 
        if zero == -1 and one == -1 :
            swap = "1"
        else :
            if zero == -1 : swap = "1"
            elif one == -1 : swap = "0"
            else : swap = "0" if zero < one else "1"

            
    for letter in text :
        if letter == "?" : print(swap , end="")
        else :
            swap = letter
            print(letter , end="")
    print(end="\n")