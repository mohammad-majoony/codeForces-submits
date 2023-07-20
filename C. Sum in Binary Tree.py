for _ in range(int(input())) :
    num = int(input())
    count = 0
    while(num > 1) :
        count += num 
        num //= 2
    print(count + 1)