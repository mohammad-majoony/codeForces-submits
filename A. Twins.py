length = int(input())
nums = list(sorted(map(int,input().split()) , reverse=True))

sums = sum(nums)
count = 0
coinsSum = 0

for index in range(length) :
    count += 1
    coinsSum += nums[index]
    if coinsSum > (sums - coinsSum) : quit(print(count))