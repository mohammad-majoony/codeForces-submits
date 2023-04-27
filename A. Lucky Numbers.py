test_count = int(input())
ansewr = []
for x in range(test_count) :
    start , end = list(map(int,input().split()))
    luckiness  = []
    for num in range(end , start - 1 , - 1) :
        num = list(str(num))
        num = [int(x) for x in num]
        append_number = max(num) - min(num)
        luckiness.append(max(num) - min(num))
        if append_number == 9 : break
    higher = max(luckiness)
    ansewr.append(end - luckiness.index(higher))
for ans in ansewr : print(ans )    