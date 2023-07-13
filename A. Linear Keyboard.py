for _ in range(int(input())) :
    text1 = list(input())
    text2 = list(input())
    count = 0
    for index in range(1 , len(text2)) :
        count += abs(text1.index(text2[index]) - text1.index(text2[index - 1]))
    print(count)