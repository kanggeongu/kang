res = ""
s = input()
while(s != "="):
    res = res + s
    s = input()
print(eval(res))
