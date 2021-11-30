t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr=sorted(arr)
    print(arr[0]+arr[n-1])
# Hint: As the array must contain only two elements, after sorting , the last two elements only will be there after repeatedly removing the median elements