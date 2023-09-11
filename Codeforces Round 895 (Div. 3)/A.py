from math import ceil
for _ in range(int(input())) : 
    a , b , c = map(int,input().split()) 
    print(ceil(ceil(abs(a - b) / 2) / c))