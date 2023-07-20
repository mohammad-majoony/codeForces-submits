s1 = input()
s2 = input()
length = len(s1)

word = [0] * length

for index in range(length) :
    if s1[index] == s2[index] :
        word[index] = "z"
    elif ord(s1[index]) < ord(s2[index]) :
        exit(print(-1))
    elif ord(s1[index]) > ord(s2[index]) :
        word[index] = s2[index]
    
print("".join(word))