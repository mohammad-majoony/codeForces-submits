n = int(input())
cards = list(map(int,input().split()))
left = right = 0
indexl = 0 ; indexr = n - 1

def l_or_r() :
    return "R" if cards[indexr] >= cards[indexl] else "L"

for i in range(n) :
    if i % 2 == 0 :
        if l_or_r() == "R" :
            left += cards[indexr]
            indexr -= 1
        else :
            left += cards[indexl]
            indexl += 1
    else : 
        if l_or_r() == "R" :
            right += cards[indexr]
            indexr -= 1
        else :
            right += cards[indexl]
            indexl += 1
print(left , right) 