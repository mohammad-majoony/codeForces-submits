for _ in range(int(input())) :
    nums = int(input())
    if nums >= 111 * (nums % 11) : 
        print("YES")
    else :
        print("NO")