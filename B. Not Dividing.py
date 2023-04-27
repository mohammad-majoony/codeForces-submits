test_count = int(input())
ansewr = []
for test in range(test_count) :
    n = int(input())
    count = 0
    nums = list(map(int,input().split()))
    flag = True
    while(flag) :
        flag = False
        for x in range(1 , n) :
            if nums[x] % nums[x-1] == 0 or nums[x-1] == 1 :
                if nums[x-1] == 1 :
                    count += 1
                    nums[x-1] += 1
                else:    
                    count += 1
                    nums[x] += 1
                flag =  True   
    ansewr.append(nums)
for an in ansewr : print(*an)