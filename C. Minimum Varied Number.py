for _ in range(int(input())) :
    num = int(input())
    mini = ""
    mines = 9
    while num > 0 :
        
        if num < 10 and num < mines : 
            mini = mini + f"{num}"
            break
        else :
            num -= mines 
            mini = mini + f"{mines}"
            mines -= 1
    
    print(mini[::-1])