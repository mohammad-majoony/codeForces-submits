def smallest(length , sums) :
    ans = [0] * length
    ans[0] = 1
    sums -= 1
    
    index = length - 1
    while index > 0 and sums > 0 :
        if sums > 9 : 
            ans[index] = 9
            sums -= 9
        else :
            ans[index] = sums
            sums = 0
        index -= 1
    ans[0] += sums
    return ans

def largest(lenght , sums) :
    ans = [0] * length
    index = 0
    while index < lenght and sums > 0 :
        if sums > 9 : 
            ans[index] = 9
            sums -= 9
        else :
            ans[index] = sums
            sums = 0
        index += 1
        
    return ans

length , sums = map(int,input().split())

if length == 1 :
    if sums >= 10 : print(-1 , -1)
    else : print(sums , sums)
elif length * 9 < sums or (length > 1 and sums == 0) : print(-1 , -1)

else :
    small = smallest(length , sums)
    large = largest(length , sums)
    print("".join(map(str,small)) , "".join(map(str,large)))