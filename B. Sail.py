t , x , y , xi , yi = map(int,input().split())
moves = list(input())

moveNeaded = {}
move = []
count = 0

if x != xi :
    count += 1
    if xi > x :
        moveNeaded["E"] = abs(xi - x)
        move.append("E")
    else : 
        moveNeaded["W"] = abs(x - xi)
        move.append("W")

if y != yi :
    count += 1
    if yi > y  :
        moveNeaded["N"] = abs(yi - y)
        move.append("N")
    else : 
        moveNeaded["S"] = abs(y - yi)
        move.append("S")

if count == 0 : quit(print(0))   

for index in range(t) :
    if moves[index] in move :
        moveNeaded[moves[index]] -= 1
        if moveNeaded[moves[index]] == 0 : count -= 1
        if count == 0 : quit(print(index + 1))

print(-1)