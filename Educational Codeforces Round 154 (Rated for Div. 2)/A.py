primes = ['13' , '17' , "19" , "23" , "29" , "31" , "37" , "41" , "43" , "47" , "53" , "59" , "61" , "67" , "71" , "73" , "79" , "83" , "89" , "97"]

for _ in range(int(input())) :
    dicN = {}
    nums = list(input())
    for index in range(len(nums)) :
        dicN[nums[index]] = index 
    res = -1
    for num in primes :    
        last = -1 
        flag = 1
        for letter in num :
            if dicN[letter] > last : last = dicN[letter]
            else : 
                flag = 0
                break
        if flag : 
            res = num 
            break
    print(res)