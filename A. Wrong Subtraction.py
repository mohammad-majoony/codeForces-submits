n , k = input().split()
for word in range(int(k)) :
    if int(n[len(n)-1:]) != 0 : n = str(int(n) - 1)
    else : n = n[:len(n)-1]  
print(n)