#include<stdio.h>
#include<conio.h>

void main()
{
	//1
	//2 3
	//4 5 6
	//7 8 9 10
	//11 12 13 14 15

	int i,n,num=1;
	
	for(i=1; i<=5; i++)
	{
		for(n=1; n<=i; n++)
		{
			printf("%d ",num);
			num++;	
		}
		printf("\n");
	}
}