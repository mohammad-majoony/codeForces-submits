n , m , a , b = map(int,input().split())
count = 0
if b / m < a : 
    while n >= m : 
        n -= m
        count += b
    if n * a > b : 
        count += b
        n = 0
count += n * a
print(count)