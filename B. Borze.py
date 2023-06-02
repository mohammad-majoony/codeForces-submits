word = input()
index = 0
while(index < len(word)) :
    if word[index:index + 1] == "." : 
        print(0,end="")
        index += 1
    elif word[index:index + 2] == "-." : 
        print(1,end="")
        index += 2
    else :
        print(2,end="")
        index += 2