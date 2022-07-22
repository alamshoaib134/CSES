n,t = [int(x) for x in input().split()]

k = []
k = [int(x) for x in input().split()]
low = 0
hi = 100000000000000000000000000
ans = 0

while low<=hi:
    mid = (low+hi)//2
    s = 0
    for ele in k:
        s+= (mid//ele)
        if s>=t:
            break
    if s>=t:
        ans = mid
        hi = mid-1
    else:
        low = mid+1
print(ans)
    