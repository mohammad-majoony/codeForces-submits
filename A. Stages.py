n , k = list(map(int,input().split()))
text = (list(sorted(map(lambda x : ord(x) - 96,input()))))

cost = text[0]
last = text[0]
k -= 1

for index in range(1 , n) :
    if k == 0 : break
    if text[index] - last >= 2 : 
        last = text[index] 
        cost += text[index] 
        k -= 1

print(cost if k == 0 else -1)