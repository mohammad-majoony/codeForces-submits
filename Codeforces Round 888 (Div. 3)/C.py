for _ in range(int(input())) :
    lenght , k = map(int,input().split())
    nums = list(map(int,input().split()))
    
    letterS = nums[0]
    count = 0
    endS = -1
    for index in range(lenght) :
        if nums[index] == letterS : count += 1
        if count == k :
            endS = index
            break
        
    if endS == lenght - 1 :
        print("YES")
        continue  
    if endS == -1 :
        print("NO")
        continue
    
    letterE = nums[-1]
    count = 0
    endE = -1
    
    if letterE == letterS :
        print("YES")
        continue  
    
    for index in range(lenght - 1 , -1 , -1 ) :
        if nums[index] == letterE : count += 1
        if count == k :
            endE = index
            break
    
    print("YES" if endS < endE and endE != -1 else "NO")