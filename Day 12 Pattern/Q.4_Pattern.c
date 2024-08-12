#include<stdio.h>
#include<conio.h>

void main()
{
	//5
	//5 4
	//5 4 3
	//5 4 3 2
	//5 4 3 2 1
	
	int i,n;
	
	for(i=5; i>=1; i--)
	{
		for(n=5; n>=i; n--)
		{
			printf("%d ",n);	
		}
		printf("\n");
	}
}