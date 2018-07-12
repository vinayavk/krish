#include<stdio.h>
#include<math.h>
int main(){
    
    int n,rem,r,a,result,t1,t2,i;
     scanf("%d%d",&r,&a);
   for(i=r+1;i<a;++i)
   {
      t1 = i;
      t2 = i;
    while(t1!=0)
    {
        t1/=10;
        ++n;
    }
    
    while(t2!=0)
    {
        rem=t2%10;
        result +=pow(rem,n);
        t2 /=10;
    }
    if (result==i)
    {
      printf("%d",i);
     }
     n=0;
     result=0;
   }
    return 0;
}
