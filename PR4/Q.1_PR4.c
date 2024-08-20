#include<stdio.h>
#include<conio.h>

void main()
{
	//Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
	
	int i,j,num=11;
	
	for(i=1; i<=5; i++)
	{
		num=41;
		for(j=1; j<=i; j++)
		{
			printf("%d ",num);
			num++;
			
		}
		printf("\n");
	}
}
