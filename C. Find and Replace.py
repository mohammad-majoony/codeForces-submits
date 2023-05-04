for _ in range(int(input())) :
    length = int(input())
    text = input()
    index = 0
    flag = True 
    while(index < length - 1 and flag) :
        for i in range(index + 1 , length , 2) :
            if text[index] == text[i] :
                print("NO")
                flag = False
                break
        index += 1 
    if flag :
        print("YES")