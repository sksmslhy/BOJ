N = int(input())
arrA = sorted(map(int,input().split()))
arrB = sorted(map(int,input().split()))
sum = 0

for i in range(N):
    sum += int(arrA[i]*arrB[N-i-1])

print(sum)
