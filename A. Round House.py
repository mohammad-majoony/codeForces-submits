count , start , walk = map(int,input().split())
while walk > count : walk -= count
while walk < 0 : walk += count
res = start + walk
print(res if res <= count else res - count) 