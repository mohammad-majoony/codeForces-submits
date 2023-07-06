for _ in range(int(input())) :
    num = int(input())
    count = 0
    for i in range((num % 10) - 1) : count += 10
    j = 1
    for i in str(num) :
        count += j
        j += 1
    print(count)