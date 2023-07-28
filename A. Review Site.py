for _ in range(int(input())) :
    length = int(input()) 
    nums = list(map(int,input().split()))
    
    count = 0
    
    for num in nums : 
        if num != 2 : count += 1
    print(count)