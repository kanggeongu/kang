def fac(n):
    if n==0:
        return 1
    return n*fac(n-1)
n = eval(input("Enter the value: "))
print(fac(n))
