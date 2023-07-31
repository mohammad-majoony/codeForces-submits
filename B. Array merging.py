def calculator(lis , dic) :
    count = 1 
    for index in range(1 , length) :
        if lis[index] == lis[index - 1] : count += 1
        else : 
            if lis[index - 1] not in dic : dic[lis[index - 1]] = count 
            else : 
                dic[lis[index - 1]] = max(count , dic[lis[index - 1]])
            count = 1
        if index == length - 1 :
            if lis[index] not in dic : dic[lis[index]] = count 
            else : 
                dic[lis[index]] = max(count , dic[lis[index]])


for _ in range(int(input())) :
    length = int(input())
    
    l1 = list(map(int,input().split()))
    l2 = list(map(int,input().split()))
    nDict1 = {l1[0] : 1}
    nDict2 = {l2[0] : 1}
    
    calculator(l1 , nDict1)
    calculator(l2 , nDict2)
    
    maxi = 0
    for key , value in nDict1.items() :
        res = value
        if key in nDict2 :
            res += nDict2[key]
        if res > maxi : maxi = res
        
    for key , value in nDict2.items() :
        res = value
        if key in nDict1 :
            res += nDict1[key]
        if res > maxi : maxi = res
    
    print(maxi)