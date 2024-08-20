#include<stdio.h>

void main()
{
	int i,y;
	
	for(i=1; i<=5; i++)
	{
		for(y=1; y<=5; y++)
		{
			if(i==1 || i==3 ||y==1)
			{
				printf("*");
			}
			else if(i==2 && y==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
