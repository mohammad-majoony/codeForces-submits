n , m = map(int,input().split())
wDict = {}
for _ in range(m) :
    key , value = list(map(str,input().split(" ")))
    wDict[key] = value
for word in list(map(str,input().split(" "))) :
    if len(word) <= len(wDict[word]) : print(word , end=" ")
    else : print(wDict[word] , end=" ")