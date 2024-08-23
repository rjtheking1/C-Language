#include<stdio.h>

void main()
{
//	1 2 3 4 5
//	  2 3 4 5
//		3 4 5
//		  4 5
//			5
	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(k=i; k<=4; k++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}