#include<stdio.h>

void main()
{
	//	1
	//	2 1
	//	3 2 1
	//	4 3 2 1
	//	5 4 3 2 1
	
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<=4; k++)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}