name = "codeforces"
for _ in range(int(input())) :
    count = 0
    text = input()
    for index in range(10) :
        if text[index] != name[index] : count += 1
    print(count)