for _ in range(int(input())) :
    num1 = int(input())
    num2 = str(num1)
    nums = []
    while(num1 != 0) :
        lenght = len(num2)
        high = num2[0]
        nums.append(int(high) * pow(10 , lenght - 1))
        num2 = num2[1:]
        try :
            num1 = int(num2)
            num2 = str(num1)
        except : break ;
    print(f"{len(nums)}")
    print(*nums)