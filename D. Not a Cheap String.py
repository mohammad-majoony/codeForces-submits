for _ in range(int(input())) :
    text = input()
    length = len(text)
    
    k = int(input())
    numSums = sum([ord(x) - 96 for x in text])
    
    if numSums <= k :
        print(text)
        continue 
    
    nDict = {}
    for index in range(len(text)) :
        nDict[index] = ord(text[index])
        
    index = 0    
    n = numSums - k 
    sortedDict = sorted(nDict , key= lambda x : nDict[x])[::-1]
    
    while n > 0 :
        ordLet = nDict[sortedDict[index]]
        nDict[sortedDict[index]] = 0
        n -= (ordLet - 96)
        index += 1
    
    for i in range(length) :
        if nDict[i] != 0 : print(chr(nDict[i]) , end="")
    print(end="\n") 
    