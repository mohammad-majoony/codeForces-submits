for _ in range(int(input())) :
    num = int(input())
    if num == 1 :
        print(1)
        continue
    elif num == 2 :
        print(2)
        continue
    for n in range(1 , num + 1) :
        if num % n != 0 : 
            print(n - 1)
            break
        