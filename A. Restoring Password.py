password = input()

nums = [0] * 10

for index in range(10) : nums[index] = input()

for index in range(0 , 80 , 10) :
    num = password[index:index + 10] 
    print(nums.index(num) , end="")