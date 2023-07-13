for _ in range(int(input())) :
    num = int(input())
    n1 = n2 = 0
    for number in range(1,num + 1) :
        res = 2 ** number
        if number <= (num //2) - 1 or number == num : n1 += res
        else : n2 += res
    print(n1 - n2)