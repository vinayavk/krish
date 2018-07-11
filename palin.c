#include<stdio.h>
void main(){
    
    int a,k=0,rem,x;
    x=a;
  
    scanf("%d",&a);
    while(a!=0)
    {
        rem = a%10;
       k= rem+k*10;
       a/=10;
    }
   if(x==k)
    
        
        printf("yes");
    
    else
    
    
    printf("no");
    
    return 0;
}
