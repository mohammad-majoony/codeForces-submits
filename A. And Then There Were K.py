for _ in range(int(input())) :
    num = bin(int(input()))
    num = "0b" + ("1" * len(num[3:]))
    if len(num) == 2 : num += "0"
    print(int(num , 2))
    
    