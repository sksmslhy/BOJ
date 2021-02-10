tc = int(input())
temp = [9,8,7,6,5,4,3,2]
ary = []

for i in range(tc):
    N = int(input())
    if N == 1:
        ary.append(N)
    else:
        cnt = 0
        c = 0
        while(True):
            if cnt == 8:
                ary.append(-1)
                break
            if N == 1:
                ary.append(c)
                break
            cnt = 0
            for i in range(8):
                if N % temp[i] == 0:
                    N = N // temp[i]
                    c += 1
                    break
                else: cnt += 1
                
for i in range(tc):
    print(ary[i])
