#include<stdio.h>
#include<conio.h>

void main()
{
	//1 0 1 0 1
	//1 0 1 0
	//1 0 1
	//1 0
	//1

	int i,n;
	for(i=5; i>=1; i--)
	{
		for(n=1; n<=i; n++)
		{
				if(n%2==0)
			{
				printf("0 ");
			}	
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
