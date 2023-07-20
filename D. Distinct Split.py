for _ in range(int(input())) :
    
    length = int(input())
    text = list(input())
    
    maxi = 0 
    
    for index in range(length) :
        count = len(set(text[:index])) + len(set(text[index:]))
        if count > maxi : maxi = count 
        if maxi == length : break

          
    print(maxi)