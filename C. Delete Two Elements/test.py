for _ in range(int(input())) : 
    leng = int(input())
    lenk = leng - 2 
    arr = list(map(int,input().split()))
    sums = sum(arr) 
    count = 0 
    dic = {}
    for i in arr :
        if i not in dic : 
            dic[i] = 0
        dic[i] += 1
    if (sums * lenk) % leng == 0 : 
        m = sums * lenk // leng 
        for i in range(leng) :
            f = sums - m - arr[i]
            if f in dic : count += dic[f]
            if arr[i] == f : count -= 1 
    print(count // 2)