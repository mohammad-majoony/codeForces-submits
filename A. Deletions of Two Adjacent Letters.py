for _ in range(int(input())) :
    text = list(input())
    char = input()
    flag = True
    for index in range(0 , len(text) , 2) :
        if text[index] == char : 
            flag = False
            print("YES")
            break
    if flag : print("NO")