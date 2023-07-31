import time
for _ in range(int(input())) :
    num = int(input())
    div , k = 3 , 2
    while True :
        if num // div == num / div : 
            print(num // div)
            break
        div += 2 ** k
        k += 1