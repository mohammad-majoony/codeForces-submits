def maxCrossingSum(arr , low , mid , high) :
    max_left = float("-inf")
    sum = 0
    for index in range(mid , low - 1 , -1) :
        sum += 1 if arr[index] == 0 else -1
        if sum > max_left : 
            max_left = sum
            
    max_right = float("-inf")
    sum = 0
    for index in range(mid , high + 1) :
        sum += 1 if arr[index] == 0 else -1
        if sum > max_right : 
            max_right = sum
    mines = 1 if arr[mid] == 1 else -1 
    return max(max_left , max_right , max_left + max_right + mines)
            
        

def maxSubArraySum(arr , low , high) :
    if (low > high): return float("-inf") 
    if low == high : return 1
    mid = (high + low) // 2
    
    L = maxSubArraySum(arr , low , mid)
    R = maxSubArraySum(arr , mid + 1 , high)
    C = maxCrossingSum(arr , low , mid , high)
    
    return max(L , R , C)


length = int(input())
nums = list(map(int,input().split()))
oneCount = nums.count(1)
print(length - 1 if oneCount == length else maxSubArraySum(nums , 0 , length - 1) + oneCount)