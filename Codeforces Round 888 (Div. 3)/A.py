for _ in range(int(input())) :
    cPeople , steps , dif , height = list(map(int,input().split()))
    nums = list(map(int,input().split()))
    
    count = 0
    
    for num in nums :
        pair = abs(height - num)
        if pair % dif == 0 :
            res = pair // dif
            count += 1 if 0 < res < steps else 0
        else : continue
    print(count)