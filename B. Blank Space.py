for _ in range(int(input())) :
    length = int(input())
    text = list(filter(lambda x : x != " ", input()))
    maxCount = count = 0 
    
    for letter in text :
        if letter == "0" :
            count += 1
        else :
            if count > maxCount : maxCount = count
            count = 0
    if count > maxCount : maxCount = count
    print(maxCount)
    