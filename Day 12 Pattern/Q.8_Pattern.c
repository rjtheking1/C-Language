#include<stdio.h>
#include<conio.h>

void main()
{
	//1 2 3 4 5
	//2 3 4 5
	//3 4 5
	//4 5
	//5
	
	int i,n;
	
	for(i=1; i<=5; i++)
	{
		for(n=i; n<=5; n++)
		{
			printf("%d ",n);	
		}
		printf("\n");
	}
}