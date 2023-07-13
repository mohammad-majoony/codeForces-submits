p1 , p2 = list(input())
myPick = list(input())
for letter in myPick :
    if p1 == letter or p2 == letter : exit(print("YES"))
print("NO")