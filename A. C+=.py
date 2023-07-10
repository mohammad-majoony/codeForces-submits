for _ in range(int(input())) :
    nums = list(map(int,input().split()))
    nums.sort()
    count = 0
    a , b , n = nums
    while b <= n :
        count += 1
        a += b
        a , b = b , a
    print(count)
    