for _ in range(int(input())) :
    text = input()
    acount = text.count("A")
    bcount = text.count("B")
    ccount = text.count("C")
    sum = bcount - acount - ccount
    print("YES" if sum == 0 else "NO")