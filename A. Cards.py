length = input()
text = input()
zcount = ncount = 0
for letter in text :
    if letter == "n" : ncount += 1
    if letter == "z" : zcount += 1
for _ in range(ncount) :
    print(1 , end=" ")
for _ in range(zcount) :
    print(0 , end=" ")