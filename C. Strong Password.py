def nextIndex(perviousIndex , letter) :
    if letter in nDict :
        for index in nDict[letter] :
            if index > perviousIndex :
                return index
        return -1
    else :
        return -1

for _ in range(int(input())) :
    inp = input()
    nDict = {}
    for index in range(len(inp)) :
        if inp[index] not in nDict : nDict[inp[index]] = [index]
        else : nDict[inp[index]].append(index)
    length = int(input())
    flag = False
    l1 = input()
    l2 = input()
    perviousindex = -1
    for index in range(length) :
        mini = min(int(l1[index]) , int(l2[index]))
        maxi = max(int(l1[index]) , int(l2[index]))
        maxIndex = -1
        for num in range(mini , maxi + 1) :
            res = nextIndex(perviousindex , str(num))
            if res == -1 : 
                flag = True
                break
            maxIndex = max(maxIndex , res)
        if flag :
            break
        perviousindex = maxIndex
    print("YES" if flag else "NO")
    
            
        
        