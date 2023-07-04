flag = True
lents = list(map(int,input().split())) 
li = []
for i in range(lents[0]) :
    li.append(list(input()))
    if flag :
        if "C" in li[i] or "M" in li[i] or "Y" in li[i] : 
            print("#Color")
            flag = False
if flag : print("#Black&White")