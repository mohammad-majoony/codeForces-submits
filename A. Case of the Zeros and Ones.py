length = int(input())
one = 0
zero = 0

for num in input() : 
    if num == "1" : one += 1
    else : zero += 1
    
print(length - (min([zero , one]) * 2)) 