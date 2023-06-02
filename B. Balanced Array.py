for _ in range(int(input())) :
    length = int(input())
    if (length // 2) % 2 == 0 :
        print("YES")
        for i in range(2 , length + 1 , 2) : print(i,end=" ")
        for j in range(1 , length , 2) : 
            if length - 1 == j : 
                print(j + (length // 2),end=" ")
            else : print(j,end=" ")
        print("")
    else : print("NO")