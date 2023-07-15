for _ in range(int(input())) :
    length = input()
    text = list(map(int,input().split()))
    textset = list(set(text)) 
    print(*textset)