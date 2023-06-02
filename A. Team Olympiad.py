chideren_count = int(input())
skils = list(map(int,input().split()))
count = min([skils.count(1),skils.count(2),skils.count(3)])
print(count)
for i in range(count) :
    one = skils.index(1)
    two = skils.index(2)
    three = skils.index(3)
    print(one + 1 , two + 1 , three + 1)
    skils[one] = -1 ; skils[two] = -1 ; skils[three] = -1