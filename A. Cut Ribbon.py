n, a, b, c = map(int, input().split())
ans = [-4000]*4001
ans[0] = 0
for i in range(min(a, b, c), n+1):
    ans[i] = max(ans[i-a], ans[i-b], ans[i-c]) + 1
print(ans[n])