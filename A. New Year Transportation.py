length , cell = map(int,input().split())
nums = list(map(int,input().split()))
index = 0
while index < cell :
    if index == cell - 1 : quit(print("YES"))
    index += nums[index]
print("NO")