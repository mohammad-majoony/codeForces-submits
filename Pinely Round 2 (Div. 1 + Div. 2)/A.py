for _ in range(int(input())) :
    length , online , queue = list(map(int,input().split()))
    text = list(input())
    flag = 0
    getOnline = 0
    getOffline = 0
    if length <= online and online - getOffline >= length : flag = 2
    elif length <= online and not flag : flag = 1
    for index in range(queue) :
        if text[index] == "+" : online += 1
        else : getOffline += 1
        if length <= online and online - getOffline >= length : flag = 2
        elif length <= online and not flag : flag = 1
    if flag == 2 : print("YES")
    elif flag : print("MAYBE")
    else : print("NO")