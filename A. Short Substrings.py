for _ in range(int(input())) :
    text = list(input())
    i = 2 
    while(True) :
        if len(text) == i : break
        if text[i] == text[i - 1] : 
            text.pop(i)
            i -= 1
        i += 2
    print("".join(text))
