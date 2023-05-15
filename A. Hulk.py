n = int(input())
for i in range(n) :
    if i % 2 == 0 : print("I hate " , end="")
    else : print("I love " , end="")
    print("it" if i == n - 1 else "that " , end="")