for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    arr = [nums[0]]
    index = 1
    compare = 0
    while index < length :
        if nums[index] < arr[compare] : 
            arr.append(nums[index])
            arr.append(nums[index])
            compare += 2
        else : 
            arr.append(nums[index])
            compare += 1
        index += 1
    print(len(arr))
    print(*arr)