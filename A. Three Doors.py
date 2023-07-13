for _ in range(int(input())) :
    myKeys = int(input())
    nums = list(map(int,input().split()))
    sum = 6 - myKeys
    while myKeys != 0 :
        myKeys = nums[myKeys - 1]
        sum -= myKeys
    print("YES" if sum == 0 else "NO")