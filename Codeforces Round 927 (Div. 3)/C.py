for i in range(int(input())) :
    n , m = list(map(int , input().split()))
    arr = list(map(int , input().split()))  
    mul = 1
    num = 0  
    r , l = n - 1 , 0
    for i in arr :
        mul *= i
    txt = input()
    for i in range(n) :
        print(mul % m , end=" ")
        if txt[i] == 'R' :
            mul //= arr[r] 
            r -= 1 
        else  :
            mul //= arr[l] 
            l += 1
    print() 