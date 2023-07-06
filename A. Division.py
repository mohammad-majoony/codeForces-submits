for _ in range(int(input())) :
    rating = int(input())
    print("Division " , end="")
    if 1900 <= rating : print(1)
    elif 1600 <= rating <= 1899 : print(2)
    elif 1400 <= rating <= 1599 : print(3)
    elif rating <= 1399 : print(4)