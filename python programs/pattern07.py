row= int(input("the no of rows\t:"))
for r in range (row+1):

    for c in range (r+1):
        print("{0}{1}".format(r,c),end="")
    print()
