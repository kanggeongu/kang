def go(num):
    global res,N
    if num<10:
        num *= 10
    temp_sum = num/10 + num%10
    if (temp_sum+num%10 == N):
        return
    go(temp_sum+num%10)
    res+=1

N = eval(input())
res=0
go(N)
print(res)

