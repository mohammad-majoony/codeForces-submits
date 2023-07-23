for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    flag = True
    for index in range(length) :
        if index + 1 >= nums[index] : 
            flag = False
            print("YES")
            break
    if flag : print("NO")