for _ in range(int(input())) :
    inp = input()
    b = inp.split("a")
    a = inp.split("b")
    print("NO" if "a" in a or "b" in b else "YES")
        