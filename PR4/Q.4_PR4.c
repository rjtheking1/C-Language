#include<stdio.h>

void main()
{
	int i,j,z;
	
	for(i=5; i>=1; i--)
	{
		for(z=i; z<=4; z++)
		{
			printf("  ");
		}
		
		for(j=1; j<=i; j++)
		
		if(j%2==0)
		{
			printf("0 ");
		}
		else
		{
			printf("1 ");
		}
		printf("\n");
	}
}
