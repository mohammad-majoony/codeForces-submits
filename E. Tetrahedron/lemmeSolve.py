num = int(input()) 
mod = 1000000007
last = 0
for i in range(2 , num + 1) :
    if i % 2 : last = (last - 1) * 3 ;
    else : last = (last + 1) * 3 ;
print(last % mod)