count , r = list(map(int,input().split()))
for i in range(1 , 10) :
    if (count * i) % 10 == 0 or ((count * i) % 10 == r) : quit(print(i))
print(1)