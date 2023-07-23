for _ in range(int(input())) :
    num = int(input())
    if num % 2 == 1 :
        print("YES")
        continue
    flag = True
    while num != 1 :
        if num % 2 == 1 :
            flag = False
            print("YES")
            break
        num = num // 2
    if flag : print("NO")