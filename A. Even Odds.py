count , k = map(int,input().split())

even = count // 2
odd = count // 2 + 1 if count % 2 == 1 else  count // 2
if k <= odd :
    print(2 * k - 1)
else :
    k -= odd 
    print(2 * k)