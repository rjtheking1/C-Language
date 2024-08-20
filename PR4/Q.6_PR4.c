#include<stdio.h>

void main()
{
	//Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
	
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
