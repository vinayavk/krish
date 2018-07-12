#include<stdio.h>
int main()
{
    int a,fact=1,i;
    scanf("%d",&a);
    if(a<0)
    {
        
        printf("no");
    }
    else
    {
    for(i=1;i<=a;++i)
    
    {
        
        fact*= i; 
    }
    printf("%d",fact);
    
    }
    return 0;
    
}
