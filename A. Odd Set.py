for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    even = odd = 0
    for i in range(length) :
        if nums[i] % 2 == 0 : even += 1
        if nums[i + length] % 2 == 1 : odd += 1
    print("YES" if even == odd else "NO")