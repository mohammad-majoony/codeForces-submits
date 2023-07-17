num = input()

index = 0
length = len(num)
flag = True

while index < length :
    if index < length - 2 : 
        if f"{num[index]}{num[index + 1]}{num[index + 2]}" == "144" : 
            index += 3
            continue
    if index < length - 1 : 
        if f"{num[index]}{num[index + 1]}" == "14" : 
            index += 2
            continue
    if num[index] == "1" : 
            index += 1
            continue
    else : 
        flag = False
        break
print("YES" if flag else "NO")