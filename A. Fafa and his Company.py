num = int(input()) 
count = 0 
last = num // 2
if num % 2 == 0 :
    for number in range(1 , last + 1) :
        if num % number == 0 : 
            count += 1
else :
    for number in range(1 , last + 1 , 2) :
        if num % number == 0 : count += 1
print(count)