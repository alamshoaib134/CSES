n,k = input().split()
n = int(n)
k = int(k)
arr = [i+1 for i in range(n)]
# print(arr)
index = 0
while len(arr)>0:
    n = len(arr)
    index = (index + k)%n
    print(arr[index],end=" ")
    arr.pop(index)
    
        
