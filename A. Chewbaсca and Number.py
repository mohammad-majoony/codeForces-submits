inp = list(input())
for index in range(len(inp)) :
    key = int(inp[index])
    if key >= 5 and not (index == 0 and inp[index] == "9") :
        inp[index] = str(9 - key)
print("".join(inp))