for _ in range(int(input())) :
    s1 = list(input())
    s2 = list(input())
    s3 = list(input())
    
    if len(set(s1)) == 1 and s1[0] != "." : print(s1[0])
    elif len(set(s2)) == 1 and s2[0] != "." : print(s2[0])
    elif len(set(s3)) == 1 and s3[0] != "." : print(s3[0])
    
    elif len(set([s1[0] , s2[0] , s3[0]])) == 1 and s1[0] != "." : print(s1[0])
    elif len(set([s1[1] , s2[1] , s3[1]])) == 1 and s1[1] != "." : print(s1[1])
    elif len(set([s1[2] , s2[2] , s3[2]])) == 1 and s1[2] != "." : print(s1[2])
    
    elif len(set([s1[0] , s2[1] , s3[2]])) == 1 and s1[0] != "." : print(s1[0])
    elif len(set([s1[2] , s2[1] , s3[0]])) == 1 and s1[2] != "." : print(s1[2])
    
    else : print("DRAW") 