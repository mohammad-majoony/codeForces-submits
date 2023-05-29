for _ in range(int(input())) : 
    text = input()
    lenght = len(text) 
    if lenght % 2 == 0 :
        lenght //= 2 
        right = text[0:lenght].count("1")
        left = text[lenght:].count("1")
        if right > left :
            right = text[0:lenght].replace("?" , "1")
            left = text[lenght:].replace("?" , "0")
            print(f"{right}{left}")
        elif right < left :
            left = text[lenght:].replace("?" , "1")
            right = text[0:lenght].replace("?" , "0")
            print(f"{right}{left}")
        else :
            right = text[0:lenght].count("?")
            left = text[lenght:].count("?")
            if right > left :
                right = text[0:lenght].replace("?" , "1")
                left = text[lenght:].replace("?" , "0")
                print(f"{right}{left}")
            elif right <= left :
                left = text[lenght:].replace("?" , "1")
                right = text[0:lenght].replace("?" , "0")
                print(f"{right}{left}")
    else :
        lenght //= 2 
        right = text[0:lenght].count("1")
        left = text[lenght+1:].count("1") 
        flag = text[lenght:lenght+1]
        if text[lenght:lenght+1] == "?" : flag = 1
        
        if right > left :
            right = text[0:lenght].replace("?" , "1")
            left = text[lenght+1:].replace("?" , "0")
            print(f"{right}{flag}{left}")
        elif right < left :
            left = text[lenght+1:].replace("?" , "1")
            right = text[0:lenght].replace("?" , "0")
            print(f"{right}{flag}{left}")
        else :
            right = text[0:lenght].count("?")
            left = text[lenght+1:].count("?")
            if right > left :
                right = text[0:lenght].replace("?" , "1")
                left = text[lenght+1:].replace("?" , "0")
                print(f"{right}{flag}{left}")
            elif right <= left :
                left = text[lenght+1:].replace("?" , "1")
                right = text[0:lenght].replace("?" , "0")
                print(f"{right}{flag}{left}")
                
                
# Wrong answer bitch 