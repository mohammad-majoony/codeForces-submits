for _ in range(int(input())) :
    length = int(input()) 
    nums = list(map(int,input().split())) 
    nums.sort()
    minimum = 1000
    for i in range(length - 1 , 0 , -1) :
        result = nums[i] - nums[i - 1]
        if result < minimum : minimum = result
    print(minimum)