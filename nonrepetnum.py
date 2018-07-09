def Print(l):
    l=int(input())
    
    l1=[]
    for n in range(l):
        i = n+1
        for i in range(i,len(l)):
            if l[n]!=l1[i]:
                l1.append(l1[n])
                return l1
