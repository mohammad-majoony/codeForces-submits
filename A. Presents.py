count = int(input())
p = [0] * count
nums = list(map(int,input().split()))
i = 1
for num in nums :
    p[num - 1] = i
    i += 1
print(*p)