for _ in range(int(input())) :
    a , b , c = map(int,input().split())
    turn = 1 if c % 2 == 0 else 2 
    
    if a == b and turn == 1 : print("Second")
    elif a == b and turn == 2 : print("First")
    
    elif a > b : print("First")
    else : print("Second")