n1 , h , n2 = list(map(int,input().split()))
pos = 0

mini1 = n1 if n1 < n2 else n2 
pos = 1 if n1 < n2 else 2

count = mini1

if pos == 1 :
   mini2 = n1 + n2 if n1 + n2 < h else h
   pos = 2
else :
    mini2 = n1 + n2 if n1 + n2 < h else h
    pos = 1

count += mini2

if pos == 1 :
   mini3 = n1 if h + n2 > n1 else h + n2
else :
    mini3 = n2 if n1 + h > n2 else n1 + h 
    
print(count + mini3)