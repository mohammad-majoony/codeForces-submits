nums = list(map(int,input().split()))

for i in range(nums[0] + 1 , nums[1]) :
    count = 0
    for j in range(2 , i) :
        if i % j == 0 : count += 1
    if count == 0 : exit(print("NO"))

count = 0
for j in range(2 , nums[1]) :
    if nums[1] % j == 0 : count += 1
if count == 0 : exit(print("YES"))
print("NO") 