nums = list(map(int,input().split()))
nums.sort()
one , two , three , four = nums
c = four - one
a = two - c
b = three - c 
print(a , b , c)