name = ["v" , "i" , "k" , "a"]
for _ in range(int(input())) :
    n , m = map(int,input().split())
    pas = 0  
    arr = [0] * n
    for index in range(n) :
        arr[index] = list(input())
        
    for j in range(m) :
        for i in range(n) :
            if arr[i][j] == name[pas] :
                pas += 1
                break
        if pas == 4 : break
    print("YES" if pas == 4 else "NO")