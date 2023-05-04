for _ in range(int(input())) :
    word = input()
    if word.count("0") == 0 : print(len(word) * len(word))
    elif word.count("1") == 0 : print(0)
    else :
        word = word.split("0")
        word.append(word[0] + word[len(word) -1])
        maximum = len(max(word , key=len))
        print( (maximum // 2) * ((maximum // 2) + 1) if maximum % 2 == 0 else ((maximum + 1) // 2) * ((maximum + 1) // 2) )