import math
for _ in range(int(input())) :
    length = int(input())
    arr = list(map(int,input().split()))
    if length == 1 : 
        print("NO")
        continue
    one = arr.count(1)
    if one >= math.ceil(length / 2) :
        sums = sum(arr)
        if sums >= (one * 2) + (length - one) : print("YES")
        else : print("NO") 
    else : print("YES")