list1=[int(x) for x in input().split()]
final_list = []
for num in range(len(list1)):
    for i in range(num+1, len(list1)):
        if(list1[num]==list1[i]):
            final_list.append(list1[num])
print(final_list)
