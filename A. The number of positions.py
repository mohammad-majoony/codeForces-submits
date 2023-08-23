n , a , b = map(int,input().split())
n -= a 
if n <= 0 : print(0)
else : print(min(n,b + 1))