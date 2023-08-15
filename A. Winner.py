lenght = int(input())
scoreboard = {}
timeLine = {}
for index in range(lenght) :
    name , addScore = list(input().split(" "))
    addScore = int(addScore)
    if name not in scoreboard : 
        scoreboard[name] = addScore
    else : 
        scoreboard[name] += addScore
        addScore = scoreboard[name]
    if name not in timeLine :timeLine[name] = [[index , addScore]]
    else :
        if addScore > timeLine[name][-1][-1] :
            timeLine[name].append([index , addScore])
maxScore = scoreboard[sorted(scoreboard , key= lambda x : scoreboard[x])[-1]]
timeLineName = 0
timeLinetime = float("inf")
for key , value in scoreboard.items() :
    if value >= maxScore :
        for time , score in timeLine[key] :
            if score >= maxScore and time < timeLinetime  : 
                timeLineName = key
                timeLinetime = time
print(timeLineName)