def bfs(i , j) :
    count = nums[i][j]
    nums[i][j] = 0
    stack = [(i , j)]
    while stack :
        x , y = stack.pop()
        for xi , yi in [(x , y + 1) , (x , y - 1) , (x + 1 , y) , (x - 1 , y)] :
            if 0 <= xi < n and 0 <= yi < m and nums[xi][yi] :
                count += nums[xi][yi]
                nums[xi][yi] = 0
                stack.append((xi,yi))
    return count

for _ in range(int(input())) :
    n , m = map(int,input().split())
    nums = [list(map(int,input().split())) for x in range(n)]
    maxi = 0
    for i in range(n) :
        for j in range(m) :
            if nums[i][j] :
                maxi = max(bfs(i , j) , maxi)
    print(maxi)    