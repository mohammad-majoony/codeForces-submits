length = int(input())
a = [0] * length
b = [0] * length
c = [0] * length
for index in range(length) :
    nums = list(map(int,input().split()))
    a[index] = nums[0]
    b[index] = nums[1]
    c[index] = nums[2]

print("YES" if sum(a) == sum(b) == sum(c) == 0 else "NO")