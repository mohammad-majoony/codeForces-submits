nums = list(map(int,input().split()))
maximum = max(nums)
num = 6 - maximum + 1

def gcdCalculator(a , b) :
    if a % b == 0 : return b
    return gcdCalculator(b , a % b)

gcd = gcdCalculator(6 , num)

print(f"{num // gcd}/{6 // gcd}")