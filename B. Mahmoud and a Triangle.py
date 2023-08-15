length = int(input())
nums = list(sorted(map(int,input().split())))
for index in range(2 , length) : 
    a = nums[index]
    b = nums[index - 1]
    c = nums[index - 2]
    if a + b > c and a + c > b and c + b > a : 
        quit(print("YES"))
print("NO")