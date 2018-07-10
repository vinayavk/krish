#include<stdio.h>
int main(){
    
    int a,n,c=1;
    scanf("%d%d",&a,&n);
    while (n != 0)
    {
        c*= a;
        --n;
    }
    printf("\n%d",c);
    
}
