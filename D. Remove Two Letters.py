test_count = int(input())
ansewr = []
for x in range(test_count) :
    length = int(input())
    word = input()
    count = 0 
    for i in range(length - 2) :
        if word[i] == word[i+2] : count += 1
    ansewr.append(length - 1 - count)
for an in ansewr : print(an)
