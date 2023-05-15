a , b , c = input() , input() , ""
for i in range(len(a)) :
    c += str(int(a[i]) ^ int(b[i]))
print(c)