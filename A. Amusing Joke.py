a , b = list(input()) , list(input()) 
words = a + b ; words.sort()
c = list(input()) ; c.sort()
print("YES" if c == words else "NO")