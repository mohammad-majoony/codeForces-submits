for _ in range(int(input())) :
    length = int(input())
    lenSet = len(set(list(map(int,input().split()))))
    num = lenSet
    for index in range(1 , length + 1) :
        print(num , end=" ")
        if index >= num : num += 1
    print()