for _ in range(int(input())) : 
    length = int(input())
    text = input()
    last = ""
    counter = 1
    count = 1
    for i in text :
        if i != last :
            last = i
            count = 1
        count += 1
        if count > counter :
            counter = count 
    print(counter)    