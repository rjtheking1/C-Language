#include<stdio.h>

void main()
{
	int i,j,y,l;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(y=i; y<=4; y++)
		{
			printf("    ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
