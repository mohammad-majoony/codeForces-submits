length = int(input())
info = []
count = 0
for i in range(length) :
    info.append(list(map(int,input().split())))
for home in range(length) :
    for guest in range(length) :
        if home == guest : continue
        if info[home][0] == info[guest][1] : count += 1
print(count)