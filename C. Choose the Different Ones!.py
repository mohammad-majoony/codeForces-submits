for i in range(int(input())) :
    len1 , len2 , k = list(map(int,input().split())) 
    l1 , l2 = set() , set()
    num = 0 
    
    for i in list(map(int,input().split()))  : 
        if i <= k : l1.add(i) 
    
    for i in list(map(int,input().split()))  : 
        if i <= k : l2.add(i)
    
    if len(l1) >= k // 2 and len(l2) >= k // 2 :
        l3 = l1 | l2 
        print("YES" if len(l3) == k else "NO")
    else : print("NO") 