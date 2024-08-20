#include<stdio.h>

void main()
{
	//Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
	
	int i,j,n=11;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
