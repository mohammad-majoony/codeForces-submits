names = {}
for _ in range(int(input())) :
    name = input()
    if name not in names : 
        names[name] = 0
        print("OK")
    else : 
        newName = name + f"{names[name] + 1}"
        print(newName)
        names[name] += 1