length = int(input())

moves = list(input()) 

x , y , count = 0 , 0 , 0

for index in range(length - 1) :
    if moves[index] == "U" : y += 1
    else : x += 1
    if moves[index] == moves[index + 1] and x == y : count += 1 
print(count)