for _ in range(int(input())) :
    length = int(input())
    nums = sorted(list(map(int,input().split())))
    nums[0] += 1
    count = 1
    while(length > 0) : 
        count *= nums[length - 1] 
        length -= 1
    print(count)