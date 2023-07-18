length = int(input())
text = list(input())

sitCount = standCount = 0 

for letter in text :
    if letter == "X" : standCount += 1
    else : sitCount += 1


if sitCount == standCount : 
    print(0)
    print("".join(text))
    exit()
    
length //= 2

sit = length - sitCount
stand = length - standCount 

larg = sit if sit > stand else stand


flag = True if sit > stand else False
ifcontinue = True 


print(larg)

for letter in text :
    if ifcontinue :
        if flag and letter == "X" : 
            print("x",end="")
            larg -= 1
        elif not flag and letter == "x" : 
            print("X",end="")
            larg -= 1
        else :
            print(letter,end="")    
        if larg == 0 : ifcontinue = False
    else :
        print(letter,end="")