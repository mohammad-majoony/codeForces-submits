for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split())) 
    one = nums.count(1)
    two = nums.count(2)
    if (one % 2 == 0 and two % 2 == 0) or (one != 0 and one % 2 == 0 and two % 2 == 1) : print("YES")
    else : print("NO")