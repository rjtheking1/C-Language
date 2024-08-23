#include<stdio.h>

void main()
{
	
	//5
	//5 4
	//5 4 3
	//5 4 3 2
	//5 4 3 2 1
	
	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(k=2; k<=i; k++)
		{
			printf("  ");
		}
		
		for(j=5; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}