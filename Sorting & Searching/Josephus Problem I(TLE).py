n = int(input())
k=1
arr = [i+1 for i in range(n)]
# print(arr)
index = 0
while len(arr)>0:
    n = len(arr)
    index = (index + k)%n
    print(arr[index],end=" ")
    arr.pop(index)
    
        
