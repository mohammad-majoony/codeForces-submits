n , m = map(int,input().split())
count = n 
while n >= m :
    count += n // m
    n = (n // m) + (n % m)
print(count)