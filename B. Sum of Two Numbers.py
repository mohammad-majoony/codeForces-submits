test_count = int(input())
for test in range(test_count) :
    num = input()
    a , b , flag = "" , "" , "A"
    for n in num :
        n = int(n)
        if n % 2 == 0 :
            a += str(n // 2)
            b += str(n // 2)
        else :
            if flag == "A" :
                a += str(n // 2 + 1)
                b += str(n // 2)
                flag = "B"
            else :
                a += str(n // 2)
                b += str(n // 2 + 1)
                flag = "A"
    print(int(a) , int(b))

