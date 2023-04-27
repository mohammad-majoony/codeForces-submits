test_count = int(input())
ansewr = []
for test in range(test_count) :
    jokes = list(map(int,input().split()))
    if jokes[0] == 0 : ansewr.append(1)
    else :
        minimum1 = jokes[1] if jokes[1] < jokes[2] else jokes[2]
        minimum2 = jokes[0]+1 if jokes[0]+1 < abs(jokes[1] - jokes[2]) + jokes[3] else abs(jokes[1] - jokes[2]) + jokes[3]
        ansewr.append(jokes[0] + 2*minimum1 + minimum2 )
for an in ansewr : print(an)