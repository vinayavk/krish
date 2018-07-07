a=input("Enter first string:")
b=input("Enter second string:")
c=list(set(a)&set(b))
print("The common letters are:")
for i in c:
    print(i)
