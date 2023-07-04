import math
for _ in range(int(input())) : 
    day , least , deq = list(map(int,input().split()))
    nums = list(map(int,input().split()))
    end_info = []
    index = 0 
    for i in range(day) :
        if nums[i] > deq : 
            end_info.append([nums[num] for num in range(index , i)])
            index = i + 1
        if i == day - 1 :
            end_info.append([nums[num] for num in range(index , i + 1)])
    count = 0
    for nums in end_info :
        length = len(nums)
        for i in range(least , length + 1) :
            count += length - i + 1
    print(count)