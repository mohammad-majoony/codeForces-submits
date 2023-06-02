length = int(input())
nums = list(map(int,input().split()))
police = count = 0
for i in nums :
    if i > 0 : police += i
    else : 
        if police > 0 : 
            police += i 
        else :
            count -= i
print(count)