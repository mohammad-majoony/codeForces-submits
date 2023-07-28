for _ in range(int(input())) :
    count = int(input())
    if count % 2 == 1 :
        print(7,end="")
        count -= 3
    for i in range(count // 2) : print(1,end="")
    print(end="\n")