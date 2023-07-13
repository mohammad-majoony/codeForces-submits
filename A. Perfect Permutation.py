num = int(input())
if num % 2 == 1 : print(-1)
else :
    for i in range(1 , num + 1) :
        if i % 2 == 1 : i += 1
        else : i -= 1
        print(i , end=" ")