n = 1000000
li =[]
for i in range(n+1):
    li.append(0)

for i in range(2,n+1):
    if li[i]==1:
        continue
    for j in range(i+i,n+1,i):
        li[j]=1
li[1]=1

a,b = input().split()
for i in range(int(a),int(b)+1):
    if li[i]==0:
        print(i)
