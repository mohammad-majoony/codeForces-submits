def binary_search(num) :
    if num < nums[0] : return 0
    low , high = 0 , len(nums)
    if num >= nums[high - 1] : return high
    while low <= high :
        mid = (high + low) // 2
        guess = nums[mid]
        if num >= nums[mid - 1] and num < nums[mid] : 
            return mid
        elif num >= guess :
            low = mid + 1
        else :
            high = mid - 1

shopsCount = int(input())
nums = list(sorted(map(int,input().split())))
days = int(input())


for day in range(days) : print(binary_search(int(input()))) 