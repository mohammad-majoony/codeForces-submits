for _ in range(int(input())) :
    length = int(input())
    text = list(input())
    for index in range(length) :
        if text[index] == "U" : text[index] = "D"
        elif text[index] == "D" : text[index] = "U"
    print("".join(text))