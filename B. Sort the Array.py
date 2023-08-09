length = int(input())
li = list(map(int,input().split()))
liSort = sorted(li)

index1 = -1
index2 = -1

for index in range(length) :
    if li[index] != liSort[index] : 
        index1 = index
        break
    
if index1 == -1 :
    print("yes")
    quit(print(1 , 1))
    
for index in range(length - 1 , -1 , -1) :
    if li[index] != liSort[index] : 
        index2 = index
        break
    
if liSort[index1:index2+1] == list(reversed(li[index1:index2+1])) :
    print("yes")
    print(index1 + 1 , index2 + 1)
else : print("no")