num = int(input())
count = 0
while num != 0 :
    if num // 2 != num / 2 : count += 1
    num //= 2
print(count)