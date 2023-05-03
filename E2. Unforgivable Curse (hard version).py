for _ in range(int(input())) :
    length , k = list(map(int,input().split()))
    inp1 = input()
    inp2 = input()

    if length <= k :
        print('YES' if inp1 == inp2 else 'NO')
    else:
        i = length - k
        print("YES" if sorted(inp1) == sorted(inp2) and inp1[i:-i] == inp2[i:-i] else "NO")