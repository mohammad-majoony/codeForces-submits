n , m , a = list(map(int,input().split()))

if a == m == n or (a*a) >= (n*m):
    print(1)
elif a == n :
    print((m // a) + 1 if m % a != 0 else m // a)
elif a == m :
    print((n // a) + 1 if n % a != 0 else n // a)
else :
    n = ((n // a) + 1 if n % a != 0 else n // a)
    m = ((m // a) + 1 if m % a != 0 else m // a)
    print(n * m)