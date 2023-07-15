for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    even , odd = nums[0] % 2 , nums[1] % 2
    flag = True
    for index in range(2 , length) :
        if index % 2 == 0 : 
            if nums[index] % 2 != even :
                flag = False
                print("NO")
                break
        else: 
            if nums[index] % 2 != odd :
                flag = False
                print("NO")
                break
            
    if flag :print("YES")