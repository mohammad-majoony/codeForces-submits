m = c = 0 
for _ in range(int(input())) :
    mishka , chris = list(map(int,input().split()))
    if mishka > chris : m += 1
    elif chris > mishka : c += 1
if m == c : print("Friendship is magic!^^")
else : print("Mishka" if m > c else "Chris")