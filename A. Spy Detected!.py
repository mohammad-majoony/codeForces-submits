for _ in range(int(input())) :
    lentgh = int(input())
    nums = list(map(int,input().split())) 
    sets = list(set(nums))
    print(nums.index(sets[0]) + 1 if nums.count(sets[0]) < nums.count(sets[1]) else nums.index(sets[1]) + 1)