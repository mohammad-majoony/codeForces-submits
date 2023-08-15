num = int(input())
count = 0
s = lambda x : sum(list(map(int,str(x)))) 
while num // 10 :
    num = s(num)
    count += 1
print(count)