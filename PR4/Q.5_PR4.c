#include<stdio.h>

void main()
{
	//Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
	
	int i,j,y,l;
	
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
		for(l=4; l>=i; l--)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}
