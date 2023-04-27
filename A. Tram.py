line = int(input())
count = 0
max = count
for n in range(line) :
    a , b = input().split()
    count -= int(a)
    count += int(b)
    if count > max : max = count
print(max)