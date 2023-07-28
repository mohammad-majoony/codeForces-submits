for _ in range(int(input())) :
    length , k = map(int,input().split())
    text = input()
    lDict = {}
    count = 0
    for letter in text :
        if letter not in lDict : lDict[letter] = 1
        else : lDict[letter] += 1
        
    for key , value in lDict.items() :
        if key.islower() and key.upper() in lDict :
            mines = min(lDict[key] , lDict[key.upper()])
            count += mines
            lDict[key] -= mines
            lDict[key.upper()] -= mines
        elif key.isupper() and key.lower() in lDict : 
            mines = min(lDict[key] , lDict[key.lower()])
            count += mines
            lDict[key] -= mines
            lDict[key.lower()] -= mines
            
    for key , value in lDict.items() :
        if k == 0 : break
        if value >= 2 : 
            res = value // 2
            count += res if res <= k else k
            k -= res if res <= k else k
    
    print(count)