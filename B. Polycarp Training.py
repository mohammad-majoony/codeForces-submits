length = int(input())
nums = list(sorted(map(int,input().split())))
count = 0
index = 0 
while index < length :
    if nums[index] >= count + 1 : count += 1
    index += 1
print(count)