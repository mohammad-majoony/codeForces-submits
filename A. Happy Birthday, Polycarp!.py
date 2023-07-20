for _ in range(int(input())) :
    num = input()
    length = len(num)
    number = num[0]
    count = ((length - 1) * 9) + (int(number) - 1)
    flag = True
    for n in num :
        if n > number :
            break
        if n < number :
            flag = False
            break
    print(count + 1 if flag else count)