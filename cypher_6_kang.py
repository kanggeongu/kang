def cypher():
    infile = open("input.txt","r")
    a=infile.readline()
    for i in a:
        if i == '\n':
            print()
            continue

        if i == 'z':
            i = 'a'
        elif i=='Z':
            i='A'
        else:
            i = chr(ord(i)+1)
        print(i,end='')

    infile.close()

cypher()
