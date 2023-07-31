def calculate() :
    times = list(sorted(map(int,input().split())))
    count = 1 if times[0] <= time else 0
    timeSum = times[0] if times[0] <= time else 0
    last = times[0]
    for index in range(1 , problemCount) :
        if times[index] + last > time : break
        timeSum += times[index] + last
        last = times[index] + last
        count += 1
    
    return count , timeSum

for _ in range(int(input())) :
    peopleCount , problemCount , time = map(int,input().split())
    stand = 1
    point , penalti = calculate()
    
    for people in range(1 , peopleCount) :
        pointP , timeP = calculate()
        if pointP > point : stand += 1
        elif point == pointP and timeP < penalti : stand += 1
        
    print(stand)