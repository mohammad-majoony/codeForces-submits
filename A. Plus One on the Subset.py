for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    print(max(nums) - min(nums))
    