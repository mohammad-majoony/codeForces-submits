for _ in range(int(input())) :
    num = list(map(int,input()))
    maxi = max(num)
    mini = min(num)
    length = len(num) 

    indmaxi = num.index(maxi)
    indmini = num.index(mini)

    plus = maxi if maxi == mini else 0

    if indmaxi < indmini :
        if indmaxi != 0  :
            plus = num[0]
            for i in num :
                if i > plus : 
                    break
                elif i < plus :
                    plus -= 1 
                    break
            
        else : plus = maxi - 1
        
    elif indmaxi > indmini :
        if indmini != 0 :
            plus = num[0]
            for i in num :
                if i > plus : 
                    break
                elif i < plus :
                    plus -= 1 
                    break
            
        else : plus = mini
    print(((length - 1) * 9) + plus)
    