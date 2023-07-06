num = int(input()) 
if num % 2 == 0 :
    count = num // 2 
    print(count)
    for i in range(count) : print(2 , end=" ")
else :
    count = num // 2 
    print(count)
    for i in range(count - 1) : print(2 , end=" ")
    print(3)