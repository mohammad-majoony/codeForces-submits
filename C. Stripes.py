for _ in range(int(input())) :
    input()
    data = [list(input()) for x in range(8)]
    flag = True
    for i in range(8) :
        if len(set(data[i])) == 1 and data[i][0] == "R" :  
            flag = False
            print("R")
            break
    if flag :
        for i in range(8) :
            if data[0][i]==data[1][i]==data[2][i]==data[3][i]==data[4][i]==data[5][i]==data[6][i]==data[7][i] and data[0][i] == "B" :  
                print("B")
                break