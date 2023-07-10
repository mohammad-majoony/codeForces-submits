for _ in range(int(input())) :
    num = int(input())
    if num < 10 : print(7)
    elif num % 7 == 0 : print(num)
    else :
        flag = True
        num = str(num)
        length = len(num)
        for index in range(length) :
            if not flag : break
            for number in range(1 , 10) :
                res = int(num[:index] + f"{number}" + num[index+1:])
                if res % 7 == 0 :
                    flag = False 
                    print(res)
                    break