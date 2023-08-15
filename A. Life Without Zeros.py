num1 = input()
num2 = input()
res1 = "".join(list(filter(lambda x : x != "0",str(int(num1) + int(num2)))))

num1 = list(filter(lambda x : x != "0",num1))
num2 = list(filter(lambda x : x != "0",num2))
res2 = str(int("".join(num1)) + int("".join(num2)))

print("YES" if res1 == res2 else "NO")