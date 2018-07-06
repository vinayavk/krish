#a=int(raw_input())
#=int(raw_input())
#c=[2,3,6,5]
def leftRotate(arr, d, n):
    for i in range(d):
        leftRotatebyOne(arr, n)
 
#Function to left Rotate arr[] of size n by 1*/ 
def leftRotatebyOne(arr, n):
    temp = arr[0]
    for i in range(n-1):
        arr[i] = arr[i+1]
    arr[n-1] = temp
    print(arr)
