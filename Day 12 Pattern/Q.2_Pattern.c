#include<stdio.h>
#include<conio.h>

void main()
{
	//1
	//2 1
	//3 2 1
	//4 3 2 1
	//5 4 3 2 1
	
	int i,n;
	
	for(i=1; i<=5; i++)
	{
		for(n=i; n>=1; n--)
		{
			printf("%d ",n);	
		}
		printf("\n");
	}
}