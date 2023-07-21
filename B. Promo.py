length , testCase = list(map(int,input().split()))
nums = sorted(list(map(int,input().split())))

cost = [0]

for number in nums :
    cost.append(cost[-1] + number)
    
for _ in range(testCase) :
    x , y = list(map(int,input().split()))
    print(cost[length+y-x] - cost[length-x])
    