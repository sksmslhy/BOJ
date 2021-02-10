tc = int(input())

num=2
    
for i in range(tc):
    while tc!=1:
        if tc%num==0:
            tc=tc/num
            print(num)
        else: num+=1
