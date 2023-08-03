length = int(input())
nums = list(filter(lambda x : x != " " ,input()))
count = 0
maxi = 0
try :
    start = nums.index("0")
    end = length - nums[::-1].index("0") - 1
    for index in range(start , end + 1) :
        if nums[index] == "0" : count += 1
        else : 
            start += 1
            if count > maxi : 
                maxi = count 
            count -= 1
    if count > maxi : maxi = count 
    print(start + maxi + (length - end - 1))
except : 
    print(length - 1)