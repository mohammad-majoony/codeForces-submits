year = input()
year = str(1 + int(year))
flag = True
while(True) :
    flag = True
    for letter in year :
        if year.count(letter) > 1 : 
            year = str(1 + int(year))
            flag = False
            break
    if flag:
        break
print(year)