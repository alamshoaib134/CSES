n= int(input())
k = [int(x) for x in input().split()]
s = sum(k)
k.sort()
print(max(s,k[n-1]*2))