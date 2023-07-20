text = input()
li = ["A" , "H" , "I" , "M" , "O" , "X" , "Y" , "W" , "V" , "U" , "T"] 
length = len(text)

for letter in text :
    if letter not in li : exit(print("NO"))

if length % 2 == 0 :
    s1 = list(text[:(length // 2)])
    s2 = list(reversed(text[(length // 2):]))
else :
    s1 = list(text[:(length // 2)])
    s2 = list(reversed(text[(length // 2) + 1:]))
    
print("YES" if s1 == s2 else "NO")