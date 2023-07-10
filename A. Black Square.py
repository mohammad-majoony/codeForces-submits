a = list(map(int,input().split())) 
nums = list(map(int,list(input()))) 
print((a[0] * nums.count(1)) + (a[1] * nums.count(2)) + (a[2] * nums.count(3)) + (a[3] *nums.count(4)))