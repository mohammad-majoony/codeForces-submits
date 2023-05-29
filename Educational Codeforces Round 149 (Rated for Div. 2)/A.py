for _ in range(int(input())) : 
    x , k = list(map(int,input().split()))
    print(f"1\n{x}" if x % k != 0 else f"2\n-1 {x+1}")