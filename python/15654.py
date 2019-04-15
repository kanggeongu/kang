res = []
arr=[]
check=[]
def BT(num,idx):
    global N,M
    arr[idx]=int(res[num])
    if idx==M-1:
        for i in range(idx+1):
            print(arr[i],end=' ')
        print()
        return
    for i in range(N):
        if check[i]==1:
            continue
        check[i]=1
        BT(i,idx+1)
        check[i]=0;

N,M=input().split()
N,M=int(N),int(M)
res = input().split()
arr = [0 for i in range(N+1)]
check = [0 for i in range(N+1)]

for i in range(N):
    for j in range(0,N-1):
        if int(res[j])>int(res[j+1]):
            res[j],res[j+1]=res[j+1],res[j]

for i in range(N):
    check[i]=1
    BT(i,0)
    check[i]=0;
