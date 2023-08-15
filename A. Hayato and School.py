for _ in range(int(input())) :
    length = int(input())
    even = []
    odd = []
    nums = list(map(int,input().split()))
    for index in range(length) :
        if nums[index] % 2 == 0 : even.append(index + 1)
        else : odd.append(index + 1)
    if len(odd) >= 3 : 
        print("YES")
        print(odd[0] , odd[1] , odd[2])
    elif len(odd) >= 1 and len(even) >= 2 :
        print("YES")
        print(odd[0] , even[0] , even[1])
    else : print("NO")
        