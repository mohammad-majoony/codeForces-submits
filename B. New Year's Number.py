for _ in range(int(input())) :
    num = int(input()) 
    flag = False
    while(num >= 2020) :
        if num % 2020 == 0 or num % 2021 == 0 : 
            flag = True
            break
        else : num -= 2021
    print("YES" if flag else "NO")