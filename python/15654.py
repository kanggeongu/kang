res = []
def BT(num,idx):
    global N,M

N,M=input().split()
N,M=int(N),int(M)
res = input().split()

for i in range(N):
    for j in range(i,N-1):
        if res[j]>res[j+1]:
            res[j],res[j+1]=res[j+1],res[j]
print(res)
