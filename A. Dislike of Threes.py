for _ in range(int(input())) :
    num = int(input())
    count = 0 
    i = 1
    while(count < num) :
        if i % 3 != 0 and i % 10 != 3 : count += 1
        i += 1
    print(i - 1)