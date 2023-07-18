for _ in range(int(input())) :
    length = int(input())
    timeDict = {}
    for index in range(length) :
        inp = input()
        value , key = int(inp[:inp.find(" ")]) , inp[inp.find(" ") + 1:]
        if key == "00" : continue
        if key in timeDict :
            if timeDict[key] > value : 
                timeDict[key] = value
        else :
            timeDict[key] = value
    
    cost = 0
    
    length = len(timeDict)
    if length == 3 :
        print(timeDict["11"] if timeDict["11"] < timeDict["10"] + timeDict["01"] else  timeDict["10"] + timeDict["01"])
    elif length == 2 :
        print(timeDict["11"] if "11" in timeDict else  timeDict["10"] + timeDict["01"])
    else :
        print(timeDict["11"] if "11" in timeDict else -1)
    