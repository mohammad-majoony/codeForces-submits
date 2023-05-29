import re
text = set(list(input()))
count = 0
for i in text :
    if re.match("[A-Za-z]" , i) : count += 1
print(count)