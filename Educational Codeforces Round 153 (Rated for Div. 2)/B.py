for _ in range(int(input())) :
    m , k , a1 , ak = map(int,input().split())
    if a1 >= m or (m % k <= a1 and m // k <= ak) : print(0)
    else :
        n1 = min(m // k , ak)
        n2 = min(m - k * n1 , a1) 
        mod = m - n2 - k * n1 
        
        if mod % k == 0 :
            print(mod // k)
        elif (k - mod % k ) <= n2 :
            print((mod // k) + 1)
        else : 
            print((mod // k) + (mod % k))