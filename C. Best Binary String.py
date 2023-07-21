for _ in range(int(input())) :
    text = input()
    for letter in text :
        if letter == "?" :print("1",end="")
        else : print(letter,end="")
    print(end="\n")