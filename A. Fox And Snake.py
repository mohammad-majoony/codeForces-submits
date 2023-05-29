yl , xl = list(map(int,input().split()))
pos = "right"
for y in range(yl) :
    if y % 2 == 0 : print(xl * "#")
    elif pos == "right" : 
        print((xl - 1) * "." + "#")
        pos = "left"
    else : 
        print("#" + (xl - 1) * ".")
        pos = "right"