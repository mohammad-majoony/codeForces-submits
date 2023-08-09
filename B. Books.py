lenght , time = map(int,input().split())
nums = list(map(int,input().split()))

maxi = 0
count = 0
sums = 0
rmIndex = 0

for index in range(lenght) :
    while True :
        if nums[index] + sums <= time :
            count += 1
            sums += nums[index]
            if count > maxi : maxi = count
            break
        elif nums[index] > time and count == 0 : 
            break
        else :
            count -= 1
            sums -= nums[rmIndex]
            rmIndex += 1
print(maxi)