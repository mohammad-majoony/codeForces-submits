text = input()
length = len(text)
flag = False
index = 0
flag = False
while index < length :
    if index < length - 2 :
        if f"{text[index]}{text[index + 1]}{text[index + 2]}" == "WUB" :
            if flag : 
                print(end=" ")
                flag = False
            index += 3
        else : 
            flag = True
            print(text[index] , end="")
            index += 1
    else :
        flag = True
        print(text[index] , end="")
        index += 1