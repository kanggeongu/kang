st = 'MONTUEWEDTHUFRISATSUN'
x,y=1,1
stri = input()
xx,yy = stri.split()
count=0
while 1:
    if(x==xx and y==yy):
        break
    y=y+1
    count=count+1
    if(y==28 and x==2):
        x,y=3,1
    elif(y==30):
        if(x==4 or x==6 or x==9 or x==11):
            x,y = x+1,1
    elif(y==31):
        if(x==1 or x==3 or x==5 or x==7 or x==8 or x==10 or x==12):
            x,y=x+1,1
print(st[count%7*3:count%7*3+3])
