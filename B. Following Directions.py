for _ in range(int(input())) :
    length = int(input())
    move = list(input())
    pos , flag = [0 , 0] , True 
    
    for mov in move :
        if mov == "U" :
            pos[1] += 1
        elif mov== "D" :
            pos[1] -= 1
        elif mov == "R" :
            pos[0] += 1
        else :
            pos[0] -= 1
        print(pos)
        if pos[0] == 1 and pos[1] == 1 :
                print("YES")
                flag = False
                break

    if flag : print("NO")