count = 0 
for _ in range(int(input())) :
    count_people , capacity = list(map(int,input().split()))
    if capacity - count_people >= 2 : count += 1
print(count)