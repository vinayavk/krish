def Print(list1):
     
    final_list = []
    for num in range(len(list1)):
        i = num + 1
         
        for i in range(i, len(list1)):
            if list1[num]== list1[i]:
                final_list.append(list1[num])
 
    return final_list
     
# Driver Code
list1 = [2, 1, 3, 30, 3, 2, 1, 4]
print(Print(list1))
