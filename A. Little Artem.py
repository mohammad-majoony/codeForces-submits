for _ in range(int(input())) :
    line , count = map(int,input().split())
    linestep = 1
    countstep = linestep
    for  i in range(line) :
        for j in range(count) :
            if i == line - 1 and linestep == 0 and j == count - 2 : print("B" , end="")
            elif i == line - 1 and j == count - 1 : print("B" , end="")
            else : 
                print("B" if countstep else "W" , end="")
                if countstep : countstep = 0
                else : countstep = 1
        print()
        if linestep : 
            linestep = 0 
            countstep = linestep 
        else : 
            linestep = 1
            countstep = linestep 