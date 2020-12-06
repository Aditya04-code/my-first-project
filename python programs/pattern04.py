row= int(input("the no of rows"))
for r in range (row+1):

    for c in range (r+1):
        print("*",end="")
    print()
row= int(input("the no of rows"))
for r in range (row+1,0,-1):

    for c in range (r+1):
        print("*",end="")
    print()
