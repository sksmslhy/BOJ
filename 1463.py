X = int(input())
cnt = 0
ary=[X]

def cal(X):
    array=[]
    for i in X:
        array.append(i-1)
        if i%3==0:
            array.append(int(i/3))
        if i%2==0:
            array.append(int(i/2))
    return array

while True:
    if X == 1:
        break
    tmp = ary[:]
    ary = []
    ary = cal(tmp)
    cnt+=1
    if min(ary) == 1:
        break

print(cnt)
    
