z = [int(input()) for x in range(4)]
count = 0
d = int(input())
for i in range(1 , d + 1) :
    if i % z[0] == 0 or i % z[1] == 0 or i % z[2] == 0 or i % z[3] == 0 :
        continue
    else : 
        count += 1
print(d - count)
