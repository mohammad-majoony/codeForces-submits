n , k, l, c, d, p, nl, np = list(map(int,input().split()))

friend = n
drinks = (k * l) // nl
limes = c * d
salt = p // np

print(min([drinks , limes , salt]) // friend)