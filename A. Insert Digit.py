test_count = int(input())
ansewr = []
for test in range(test_count) :
    length , num = list(map(int,input().split()))
    number = input()
    flag = True
    for x in range(length) :
        if int(number[x]) < num :
            flag = False
            ansewr.append(number[0:x] + str(num) + number[x:length])
            break
    if flag :
        ansewr.append(number + str(num))
for an in ansewr : print(an)