for _ in range(int(input())) :
    length = int(input())
    nums = list(filter(lambda x : x != " ",input().split()))
    start = nums.index("1")
    end = length - nums[::-1].index("1") - 1
    print(nums[start:end].count("0"))