lentgh = input()
count = time = 0
for t in sorted(map(int,input().split())) :
    if time <= t : 
        count += 1
        time += t 
print(count)