for _ in range(int(input())) :
    length = int(input())
    t1 = list(input())
    t2 = list(input())
    flag = False
    for index in range(length) :
        if ((t2[index] != "R" and t1[index] == "R") or (t2[index] == "R" and t1[index] != "R")) :
            flag = True
            break
    print("NO" if flag else "YES")