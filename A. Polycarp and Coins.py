import math
for _ in range(int(input())) :
    num = int(input())
    num1 = math.ceil(num / 3)
    num2 = num // 3
    if num1 + (num2 * 2) == num :
       print(math.ceil(num / 3) , num // 3)
    else :
        print(num // 3 , math.ceil(num / 3))