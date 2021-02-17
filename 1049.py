n, m = map(int, input().split())
answer = 0
six = []
one = []
div = n // 6
rem = n % 6


for _ in range(m):
    s_price, o_price = list(map(int, input().split()))
    six.append(s_price)
    one.append(o_price)

if div < 1 or rem != 0:
    if min(six) > min(one)*rem:
        answer += min(one)*rem
    else :
        answer += min(six)
if div >= 1 :
    if min(six) > min(one)*6:
        answer += min(one)*6*div
    else :
        answer += min(six)*div

print(answer)
