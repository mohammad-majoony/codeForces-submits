num = int(input())
last = 0
height = 0
count = 0
while True :
    count = last + ((height * (height + 1)) // 2)
    last = count
    if count == num : exit(print(height))
    if count > num : exit(print(height - 1))
    
    height += 1