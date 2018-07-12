#include<stdio.h>
#include<math.h>
int main(){
    
    int n=0,rem,r,k,result=0;
   scanf("%d",&k);
      r=k;
    while(r!=0)
    {
        r/=10;
        ++n;
    }
    r=k;
    while(r!=0)
    {
        rem=r%10;
        result +=pow(rem,n);
        r /=10;
    }
    if(result==k)
      printf("yes");
      else
      printf("no");

    return 0;
}
