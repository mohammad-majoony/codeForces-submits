for _ in range(int(input())) :
    length = int(input())
    arr = list(map(int,input().split()))
    arrSort = sorted(arr)
    find = -1
    for index in range(length - 1 , -1 , -1) :
        if arr[index] != arrSort[index] : 
            find = index
            break
        
    print(max(arr[0:find+1]) if find != -1 else 0)