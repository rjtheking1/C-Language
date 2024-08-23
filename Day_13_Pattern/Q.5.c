#include<stdio.h>

void main()
{
	//	5 4 3 2 1
	//	4 3 2 1
	//	3 2 1
	//	2 1
	//	1
	
	int i,j,k;
	
	for(i=5; i>=1; i--)
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