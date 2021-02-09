s1, s2, s3 = map(int, input().split())

arr=[0 for i in range(s1+s2+s3+1)]

for i in range(s1):
    for j in range(s2):
        for k in range(s3):
            arr[i+j+k+3]+=1

result = arr.index(max(arr))

print(result)
