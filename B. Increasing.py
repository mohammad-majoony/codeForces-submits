for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    sets = set(nums)
    print("YES" if length == len(sets) else "NO")
    
    