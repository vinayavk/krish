i=int(input())
l=[]
for x in range(i):
    j=input("")
    l.append(j)
b=[]
for i in range(len(l)):
    b.append(list(l[i]))
for k in range(1):
    for s in range(len(b[k])):
        if(b[k][s]==b[k+1][s]):
            print(b[k][s],end="")
        else:
            break
