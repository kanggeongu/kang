res = ""
s = input()
while(s != "="):
    res = res + s
    if((s != "+") and (s != "-") and (s != "*") and (s != "/")):
        res = int(eval(res))
    s = input()
print(eval(res))
