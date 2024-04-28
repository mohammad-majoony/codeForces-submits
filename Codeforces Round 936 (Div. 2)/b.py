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
 
 
for _ in range(int(input())) : 
    length , k = list(map(int,input().split()))
    arr = list(map(int,input().split())) 
    count = sum(arr) 
    maxi = maxSubArraySum(arr , 0 , length - 1) 
    maxi = 0 if maxi < 0 else maxi 
    count += ((2 ** k) - 1) * maxi 
    print(count % 1000000007)