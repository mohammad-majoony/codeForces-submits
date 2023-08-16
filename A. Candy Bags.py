num = int(input())
maxi = num ** 2
l1 = [0] * (maxi // 2)
l2 = [0] * (maxi // 2)

ind1 = 0
ind2 = 0

for n in range(1 , (maxi // 2) + 1) :
    if n % 2 == 0 : 
        l1[ind1] = n
        l1[ind1 + 1] = maxi - n + 1
        ind1 += 2
    else :
        l2[ind2] = n
        l2[ind2 + 1] = maxi - n + 1
        ind2 += 2
print(*l1)
print(*l2)