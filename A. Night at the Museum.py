def findMin(letter1 , letter2) :
    right = abs(ord(letter1) - ord(letter2)) - 1
    left1 = abs(ord(letter1) - ord("a")) + abs(ord(letter2) - ord("z"))
    left2 = abs(ord(letter1) - ord("z")) + abs(ord(letter2) - ord("a"))
    return sorted([right , left1 , left2])[0] + 1

text = list(input())
count = 0
if text[0] != "a" :
    count += findMin("a" , text[0])
for letter in range(len(text) - 1) :
    count += findMin(text[letter] , text[letter + 1])
print(count)