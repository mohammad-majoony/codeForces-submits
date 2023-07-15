for _ in range(int(input())):
    length = int(input())
    nums = list(map(int,input().split()))
    sNums = set(nums)
    print(len(sNums))