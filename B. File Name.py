length = int(input())
xcount = counter = 0
text = input()
for letter in text :
    if letter == "x" :
        xcount += 1
        if xcount > 2 :
            counter += 1
    else :
        xcount = 0
print(counter)