for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    nums.sort()
    flag = True
    for i in range(length - 1) :
        if nums[i + 1] - nums[i] > 1 : 
            flag = False
            break
    print("YES" if flag else "NO")