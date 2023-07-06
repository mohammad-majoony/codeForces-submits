for _ in range(int(input())) :
    text = input()
    length = len(text)
    print("YES" if text[:length//2] == text[length//2:] else "NO")