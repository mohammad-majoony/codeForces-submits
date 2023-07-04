def get() : return list(map(int,input().split()))
for _ in range(int(input())) :
    count = 0
    len = int(input())
    nums1 , nums2 = get() , get()
    min1 , min2 = min(nums1) , min(nums2)
    for i in range(len) :
        res1  , res2 = abs(nums1[i] - min1) , abs(nums2[i] - min2)
        count += res1 if res1 > res2 else res2
    print(count)