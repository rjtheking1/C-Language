#include<stdio.h>
#include<conio.h>

int main()
{
	//1
	//2 2
	//3 3 3
	//4 4 4 4
	//5 5 5 5 5
	
	int i,n;
	
	for(i=1; i<=5; i++)
	{
		for(n=1; n<=i; n++)
		{
			printf("%d ",i);	
		}
		printf("\n");
	}
}