for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    odd = even = 0
    for num in nums :
        if num % 2 == 0 : even += 1
        else : odd += 1
    if odd % 2 == 1 : print("NO")
    else : print("YES")