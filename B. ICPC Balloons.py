for _ in range(int(input())) :
    length = int(input())
    text = list(input())
    text.sort()
    count = 0
    for i in range(length) :
        if i == 0 : count += 2
        else :
            if text[i] == text[i - 1] : count += 1
            else : count += 2
    print(count)