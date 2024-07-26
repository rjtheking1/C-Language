#include<stdio.h>

void main()
{
	int n,i=1,sum=0;
	printf("Enter value n  :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("sum=%d+%d;sum=%d \n",sum,i,sum+1);
		sum=sum+i;
		i++;
		
	}
	printf("sum is %d",sum);
}


