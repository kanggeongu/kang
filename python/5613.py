res = ""
s = input()
while(s != "="):
    res = res + s
    if((s != "+") and (s != "-") and (s != "*") and (s != "/")):
        res = str(int(eval(res)))
    s = input()
print(eval(res))
