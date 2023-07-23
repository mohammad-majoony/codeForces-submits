for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    if nums != sorted(nums) :
        print(0)
        continue
    mini = float("inf")
    for index in range(length - 1) :
        res = nums[index + 1] - nums[index]
        if res < mini : mini = res
        
    print((mini // 2) + 1)