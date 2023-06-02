for _ in range(int(input())) :
    candies = int(input())
    print(candies // 2 if candies % 2 == 1 else (candies // 2) - 1)