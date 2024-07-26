#include<stdio.h>

void main()
{
	int n,i=1,fact=1;
	printf("Enter value n  :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("fact=%d*%d;fact=%d\n",fact,i,fact*1);
		fact=fact*i;
		i++;
		
	}
	printf("fact is %d",fact);
}

