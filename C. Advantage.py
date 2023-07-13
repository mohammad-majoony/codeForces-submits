for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    max1 = max(nums) 
    maxset = sorted(list(nums))
    max2 = max1 if len(maxset) == 1 else maxset[-2]
    for index in range(length) : print(nums[index] - max2 if nums[index] == max1 else nums[index] - max1, end=" ")
    print(end="\n")