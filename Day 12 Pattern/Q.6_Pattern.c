#include<stdio.h>
#include<conio.h>

int main()
{
	//5
	//4 4
	//3 3 3
	//2 2 2 2
	//1 1 1 1 1

	int i,n;
	
	for(i=5; i>=1; i--)
	{
		for(n=5; n>=i; n--)
		{
			printf("%d ",i);	
		}
		printf("\n");
	}
}