def binary_search() :
    low , high = 0 , 10e10
    while low <= high :
        mid = int((high + low) // 2)
        guess = 0
        for num in nums :
            guess += (num + (2 * mid)) * (num + (2 * mid))
        if guess == c :
            return mid
        elif c > guess :
            low = mid + 1
        else :
            high = mid - 1
    return "NOT FOUND"

for _ in range(int(input())) :
    length , c = map(int,input().split())
    nums = list(map(int,input().split()))
    print(binary_search())