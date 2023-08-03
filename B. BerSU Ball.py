n = int(input())
l1 = list(sorted(map(int,input().split())))
m = int(input())
l2 = list(sorted(map(int,input().split())))
count = 0
index = 0
flog = True
for i in range(n) :
    key = l1[i]
    for j in range(index , m) :
        if (l2[j] - key) > 1 :
            break
        if abs(key - l2[j]) <= 1 :
            count += 1
            index = j + 1
            break
print(count)