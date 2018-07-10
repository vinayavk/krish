#include<stdio.h>
void main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n!=0){
		
		count++;
		n/=10;
	}
	printf("\n %d",count);
	
	rturn 0;
	
}
