for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    indmax = nums.index(max(nums))
    indmin = nums.index(min(nums))
    indl = indmin if indmin < indmax else indmax
    indr = indmin if indmin > indmax else indmax
    mins = [0 , 0 , 0]
    mins[0] = indl + 1 +  (length - indr)
    mins[1] = indr + 1
    mins[2] = length - indl
    print(min(mins))