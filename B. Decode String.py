for _ in range(int(input())) :
    length = int(input())
    text = list(input())
    index = 0 
    while index < length :
        if index < length - 2 :
            num = int(text[index] + text[index + 1])
            if index < length - 3 and 10 <= num <= 26 and text[index + 2] == "0" and text[index + 3] != "0" :
                print(chr(num + 96) , end="")
                index += 3
            elif index == length - 3 and 10 <= num <= 26 and text[index + 2] == "0" :
                print(chr(num + 96) , end="")
                index += 3
            else :
                print(chr(int(text[index]) + 96) , end="")
                index += 1
        else :
            print(chr(int(text[index]) + 96) , end="")
            index += 1
    print(end="\n")
    
    
    
    
# print(index)
#         try :
#             if int(text[index] + text[index + 1]) < 10 or int(text[index] + text[index + 1]) > 26 o  : 
#                 print(chr(96 + int(text[index])) , end="")
#                 index += 1
#                 continue
#         except : 
#             print(chr(96 + int(text[index])) , end="")
#             index += 1
#             continue
#         try :
#             if int(text[index + 2] == 0) : 
#                 print(chr(96 + int(text[index] + text[index + 1])) , end="") 
#                 index += 3
#             else :
#            continue
#         except :
#             print(chr(96 + int(text[index])) , end="")
#             index += 1
#             continue