for _ in range(int(input())) :
    li1 = list(input())
    li2 = list(input())
    sums = set(li1 + li2)
    print(len(sums) - 1)