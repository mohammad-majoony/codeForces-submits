count = int(input())
nums = list(map(int,input().split()))
maximum = max(nums)
a = 0

for num in nums :
    if num == 0 : continue
    a += num / maximum 
    
    
    
print("{:.12f}".format(a * maximum / count))