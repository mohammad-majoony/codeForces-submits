for _ in range(int(input())) :
    
    length = int(input())
    nums = list(map(int,input().split()))
    
    li = [0] * length
    
    flag = False
    
    for num in nums :
        if num <= (length - 1) : li[num] += 1
        else : 
            flag = True
            print("NO")
            break
    if flag : continue
    
    for index in range(length - 1) :
        if li[index] < li[index + 1] :
            flag = True
            print("NO")
            break
    if flag : continue
    print("YES")