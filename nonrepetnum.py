def print(l):
    l=int(input())
    
    list=[]
    for n in range(l):
        i = n+1
        for i in range(i,len(l)):
            if l[n]!=list[i]:
                list.append(list[n])
                return list
