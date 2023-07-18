year = input()
length = len(year)
year = int(year)

if length == 1 : exit(print(1))
a = (10 ** (length - 1))

print(a - (year % a))