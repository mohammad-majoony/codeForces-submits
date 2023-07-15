for _ in range(int(input())) :
    text = input()
    sText = set(text)
    count = 1
    for letter in sText :
        count = text.count(letter)
        print(letter * count,end="")
    print(end="\n")