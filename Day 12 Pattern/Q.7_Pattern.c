#include<stdio.h>
#include<conio.h>

void main()
{
	//1 2 3 4 5
	//1 2 3 4
	//1 2 3
	//1 2
	//1
	
	int i,n;
	
	for(i=5; i>=1; i--)
	{
		for(n=1; n<=i; n++)
		{
			printf("%d ",n);	
		}
		printf("\n");
	}
}