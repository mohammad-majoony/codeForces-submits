def maxCrossingSum(arr , low , mid , high) :
    
    max_left = float("-inf")
    sum = 0
    for index in range(mid , low - 1 , -1) :
        sum += arr[index]
        if sum > max_left : 
            max_left = sum
            
    max_right = float("-inf")
    sum = 0
    for index in range(mid , high + 1) :
        sum += arr[index]
        if sum > max_right : 
            max_right = sum
            
    return max(max_left , max_right , max_left + max_right - arr[mid])
            
        

def maxSubArraySum(arr , low , high) :
    if (low > high): return float("-inf") 
    if low == high : return arr[low]
    mid = (high + low) // 2
    
    L = maxSubArraySum(arr , low , mid - 1)
    R = maxSubArraySum(arr , mid + 1 , high)
    C = maxCrossingSum(arr , low , mid , high)
    
    return max(L , R , C)
    
lenght = int(input())
arr = list(map(int,input().split()))
print(maxSubArraySum(arr , 0 , len(arr) - 1))