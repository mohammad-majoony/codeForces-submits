length , count = list(map(int,input().split()))
nums = sorted(list(map(int,input().split())))

cost = 0

for item in nums :
    if item > 0 or count == 0 : break
    cost -= item 
    count -= 1
print(cost)