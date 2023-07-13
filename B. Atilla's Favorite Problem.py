for _ in range(int(input())) :
    length = int(input())
    max = 0
    text = input()
    for letter in text :
        if max < (ord(letter) - 96) : max = ord(letter) - 96 
    print(max)