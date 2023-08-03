n , m = map(int,input().split())
if m % n != 0 : quit(print(-1))
if m == n : quit(print(0))
m //= n
count = 0
while m % 2 == 0 : 
    m //= 2  
    count += 1
while m % 3 == 0 : 
    m //= 3 
    count += 1
print(count if m == 1 else -1)
