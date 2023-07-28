for _ in range(int(input())) :
    length = int(input())
    nums = [[0,0] for x in range(length)]
    
    for index in range(length) :
        a , b = map(int,input().split())
        nums[index][0] = a
        nums[index][1] = b
    nums.sort(key= lambda x : (x[0] , -x[1]))
        
    points = 0    
    count = {}
    for a , b in nums :
        if a in count and count[a] >= a : continue 
        if a not in count : count[a] = 1
        else : count[a] += 1
        points += b
        
    print(points)