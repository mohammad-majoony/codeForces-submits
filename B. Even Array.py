for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    even = odd = wrong = 0 ;
    for i in range(length) :
        if nums[i] % 2 == 0 : even += 1 
        else : odd += 1
        if i % 2 != nums[i] % 2 : wrong += 1
    print(-1 if length // 2 != odd else wrong // 2)