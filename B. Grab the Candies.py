for _ in range(int(input())) :
    length = int(input())
    nums = list(map(int,input().split()))
    mihai = bianca = 0
    for num in nums :
        if num % 2 == 0 : mihai += num
        else : bianca += num
    print("YES" if mihai > bianca else "NO")