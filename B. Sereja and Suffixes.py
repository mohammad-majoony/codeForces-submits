n , m = map(int,input().split())
nums = list(map(int,input().split()))
count = 0
nDict = {}
ans = [0] * n
for index in range(n - 1 , -1 , -1) :
    if nums[index] not in nDict : 
        nDict[nums[index]] = "YES"
        count += 1
    ans[index] = count 
for testCase in range(m) :
    print(ans[int(input()) - 1])