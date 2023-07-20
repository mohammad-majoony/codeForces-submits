import math
text = input()
length = len(text)
aCount = text.count("a")
if aCount > (math.ceil(length / 2)) : print(length)
else : print(length - ((length - aCount + 1) - (aCount) ))