for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    mini , count = min(nums) , 0
    for i in nums :
        if i > mini : count += i - mini
    print(count)