for _ in range(int(input())) :
    zero , one = map(int,input().split())
    length = zero + one
    text = list(input())
    flag = 1 
    for index in range(length // 2) :
        if text[index] == text[length - index - 1] : 
            if text[index] == "1" : one -= 2
            elif text[index] == "0" : zero -= 2
        elif (text[index] == "?" and text[length - index - 1] == "1") or (text[index] == "1" and text[length - index - 1] == "?") :
            text[index] = "1" ; text[length - index - 1] = "1"
            one -= 2
        elif (text[index] == "?" and text[length - index - 1] == "0") or (text[index] == "0" and text[length - index - 1] == "?") :
            text[index] = "0" ; text[length - index - 1] = "0"
            zero -= 2
        else : 
            flag = 0
            break
    if flag == 0 or zero < 0 or one < 0 : print(-1)
    else :
        for index in range(length // 2) :
            if text[index] == "?" :
                if zero > one :
                    text[index] = "0" ; text[length - index - 1] = "0"
                    zero -= 2
                else : 
                    text[index] = "1" ; text[length - index - 1] = "1"
                    one -= 2
        if length % 2 == 1 :
            if text[length // 2] == "?" :
                if zero > one :
                    text[length // 2] = "0"
                    zero -= 1
                else : 
                    text[length // 2] = "1" 
                    one -= 1
            else : 
                if text[length // 2] == "1" :
                    one -= 1
                else : 
                    zero -= 1
        if zero != 0 and one != 0 : print(-1)
        else : print("".join(text))