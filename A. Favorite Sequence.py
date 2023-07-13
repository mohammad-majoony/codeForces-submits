for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    for index in range(length // 2) :
        print(f"{nums[index]} {nums[length - 1 - index]}" , end=" ")
    if length % 2 == 1 : print(nums[(length // 2)])
    else : print()