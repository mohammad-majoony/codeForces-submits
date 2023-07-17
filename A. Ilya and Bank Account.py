num = input()
flag = True if num[0] != "-" else False
if flag : print(num)
else :
    length = len(num)
    if length == 2 : print(0)
    elif length == 3 and num[2] == "0" : print(0)
    else :
        indmax = length - 1 if int(num[-1]) > int(num[-2]) else length - 2
        print(num[:indmax] + num[indmax+1:])