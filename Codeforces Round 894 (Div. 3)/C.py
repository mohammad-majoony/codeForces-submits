def slove() :
    if nums[0] != length : return "NO"
    for index in range(length) :
        if nums[nums[index] - 1] < index + 1 : return "NO" 
    return "YES"
    
for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    print(slove())