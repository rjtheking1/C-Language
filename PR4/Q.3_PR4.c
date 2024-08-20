#include<stdio.h>

void main()
{
	int i,j,y;
	for(i=5; i>=1; i--)
	{
		for(y=1; y<i; y++)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
