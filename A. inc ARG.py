length = int(input())
num = input()
reversNum = list(reversed(list(num)))
last = "1"

for index in range(length - 1 , -1 , -1) :
    if last == reversNum[index] == "0" :
        reversNum[index] = "0"
        last = "0"
    elif last == reversNum[index] == "1" :
        reversNum[index] = "0"
        last = "1"
    else :
        reversNum[index] = "1"
        last = "0"
count = 0

num = list(reversed(list(num)))

for index in range(length) :
    if reversNum[index] != num[index] : count +=1
    
print(count)
    