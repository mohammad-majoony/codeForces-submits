p_count = int(input())
welfare = list(map(int,input().split()))
maximum = max(welfare)
count = 0
for i in welfare : count += maximum - i
print(count)