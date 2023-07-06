for _ in range(int(input())) :
    num = input()
    n1 = n2 = 0
    for i in range(6) :
        if i < 3 : n1 += int(num[i])
        else : n2 += int(num[i])
    print("YES" if n1 == n2 else "NO")