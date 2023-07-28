for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    maxi = 0
    for index in range(length - 1) : 
        res = nums[index] * nums[index + 1]
        if res > maxi : maxi = res
    print(maxi)