#include<stdio.h>
#include<conio.h>

int main()
{
	//5
	//4 5
	//3 4 5
	//2 3 4 5
	//1 2 3 4 5
	
	int i,n;
	
	for(i=5; i>=1; i--)
	{
		for(n=i; n<=5; n++)
		{
			printf("%d ",n);
		}
		printf("\n");
	}
}