peopleCount , queueCount = map(int,input().split())

queue = {}
sadppl = []
startDict = {}

for event in range(peopleCount * 2) :
    nums = list(map(int,input().split()))
    if nums[0] == 1 : 
        if nums[2] not in queue : queue[nums[2]] = [[nums[1] , event]]
        else : queue[nums[2]].append([nums[1] , event])        
    else : 
        n , time = queue[nums[1]].pop(0)
        for key , li in queue.items() :
            if key != nums[1] :
                start = 0 if key not in startDict else startDict[key]
                for index in range(start , len(li)) :
                    startDict[key] = index
                    if li[index][1] < time : 
                        sadppl.append(li[index][0])
                    else : break
            
sadppl = set(sorted(sadppl))
length = len(sadppl)
if length == 0 : print(0)
else : 
    print(length)
    print(*list(sadppl))