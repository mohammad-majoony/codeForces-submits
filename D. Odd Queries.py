for _ in range(int(input())) :
    length , qCount = map(int,input().split())
    nums = list(map(int,input().split()))
    li = [0] * (length + 1) 

    for index in range(1 , length + 1) :
        li[index] = li[index - 1] + nums[index - 1]
        
    for _ in range(qCount) :
        a , b , k = map(int,input().split())
        res = ((b - a + 1) * k) + li[a - 1] + (li[-1] - li[b])
        print("YES" if res % 2 == 1 else "NO")