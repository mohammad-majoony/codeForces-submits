for _ in range(int(input())) :
    text = input()
    length = len(text)
    count = 1 if text[0] == "_" else 0
    if text[-1] == "_" : count += 1
    elif length == 1 and text[0] == "^" : count += 1
    for index in range(length - 1) :
        if text[index] == text[index + 1] == "_" : count += 1
    print(count)