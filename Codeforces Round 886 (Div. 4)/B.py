for _ in range(int(input())) :
    response = int(input())
    
    bestWC , bQ = 0 , 0
    lineRes = -1
    
    for line in range(response) :
        wordCount , quality = list(map(int,input().split())) 
        if wordCount < 11 and (quality > bQ or (quality == bQ and bestWC < wordCount)) :
            bestWC = wordCount 
            bQ = quality 
            lineRes = line + 1
    print(lineRes)