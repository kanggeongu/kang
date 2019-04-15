res = [0 for i in range(8)]
def BT(num,idx):
    global M,N
    res[idx]=num
    if idx==N-1:
        for i in range(0,idx+1):
            print(i,end = ' ')
        return;
    for i in range(num,M+1):
        BT(i,idx+1)
M,N = (input().split())
M,N = int(M),int(N)
for i in range(1,M+1):
    BT(i,0)
