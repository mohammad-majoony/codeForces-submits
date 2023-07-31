strength , count = map(int,input().split())
dragons = [list(map(int,input().split())) for d in range(count)]
dragons.sort(key=lambda x : (x[0] , -x[1]))

for li in dragons :
    if li[0] >= strength : quit(print("NO"))
    else : strength += li[1]
print("YES")