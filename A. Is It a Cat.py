li = ['m' , 'e' , 'o' , 'w']
for _ in range(int(input())) :
    currectIndex = 0
    length = int(input())
    text = input()
    flag = True
    if text[0].lower() != "m" : 
        print("NO")
        continue  
    for index in range(1 , length) :
        if text[index].lower() == li[currectIndex] : continue
        elif currectIndex != 3 and text[index].lower() == li[currectIndex + 1] :
            currectIndex += 1
        else :
            flag = False
            break
    print("YES" if flag and currectIndex == 3 else "NO")