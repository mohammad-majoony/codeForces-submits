n = int(input())
while n : 
    n -= 1
    lent = int(input())
    arr = input() 
    a , b = arr.count("-") , arr.count("+")
    print(abs(a - b)) 