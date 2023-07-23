for _ in range(int(input())) :
    text = list(input())
    setText = set(text[:len(text) // 2])
    print("YES" if len(setText) >= 2 else "NO")
    