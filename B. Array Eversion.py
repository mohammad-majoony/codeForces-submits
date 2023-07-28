for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    maximum = max(nums)
    count = 0
    maxi = nums[-1]
    for index in range(length - 1, -1 , -1) :
        if nums[index] > maxi :
            maxi = nums[index]
            count += 1
        elif nums[index] == maximum :
            break
    print(count)