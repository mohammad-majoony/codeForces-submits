count , min = list(map(int,input().split()))
time = 240 - min
i = 1
while time >= 0 :
    time -= i * 5
    i += 1
print(count if i - 1 > count else i - 2)