for _ in range(int(input())) :
    num , size = list(map(int,input().split()))
    flag = True
    if size > num :
        print("NO")
        continue
    li = [num]
    while True :
        if size in li : 
            flag = True
            break
        else :
            flag = False
            for index in range(len(li)) :
                number = li[index]
                if number % 3 == 0 :
                    flag = True 
                    li[index] = number // 3
                    li.append((number//3) * 2)
            if not flag : break
            
    print("YES" if flag else "NO")