for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    setnums = set(nums)
    print(len(setnums) if length % 2 == len(setnums) % 2  else len(setnums) - 1)