for _ in range(int(input())) :
    length = int(input())
    task = input()
    i = 0
    while i < length :
        counter = task.count(task[i])
        try :
            if task[i] != task[i + counter - 1] : 
                length = -1
                break
        except :
            length = -1
            break
        i += counter
    print("YES" if length > 0 else "NO")