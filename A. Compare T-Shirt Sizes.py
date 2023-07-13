dict = {"S" : 1 , "M" : 2 , "L" : 3}
for _ in range(int(input())) :
    sizes = list(input())
    space = sizes.index(" ")
    right = dict[sizes[len(sizes) - 1]]
    left = dict[sizes[space - 1]]
    if left == right :
        left = sizes[:space].count("X")
        right = sizes[space:].count("X")
        if left == right : print("=")
        else :
            letter = sizes[len(sizes) - 1]
            if letter == "L" : print(">" if left > right  else "<")
            else : print(">" if left < right  else "<")
    else :
        print(">" if left > right else "<")