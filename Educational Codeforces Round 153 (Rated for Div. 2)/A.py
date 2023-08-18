for _ in range(int(input())) :
    let = input()
    length = len(let)
    if let == "()" : print("NO")
    else : 
        print("YES")
        count = 0
        str1 = [0] * (length * 2)
        for index in range(length) :
            str1[index] = "(" 
        for index in range(length , length * 2) :
            str1[index] = ")"
        
        str2 = [0] * (length * 2)
        for index in range(0 , length * 2 , 2) :
            str2[index] = "("
            str2[index + 1] = ")"
            
        st1 = "".join(str1)
        st2 = "".join(str2)
        
        if let in st1 : print(st2)
        else : print(st1)