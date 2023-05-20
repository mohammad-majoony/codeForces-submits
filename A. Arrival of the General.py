count = int(input()) - 1
heights = list(map(int,input().split()))
maximum = heights.index(max(heights))
minimum = count - heights[::-1].index(min(heights)) 
if maximum == minimum : print(0)
else :
    print(count - minimum + maximum if maximum < minimum else maximum + (count - minimum) - 1) 
    