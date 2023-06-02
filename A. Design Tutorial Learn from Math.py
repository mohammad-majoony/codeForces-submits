num = int(input())
if num % 2 == 0 : 
    if (num // 2) % 2 == 1 : print((num // 2) - 1, (num // 2) + 1) 
    else : print(num // 2 , num // 2)
else : print(9 , num - 9)