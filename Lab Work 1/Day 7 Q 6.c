#include<stdio.h>

int main()
{
	int x,y;
	
	printf("Enter The Value Of Number :");
	scanf("%d",&x);
	
	y=(x/2)*2;
	if(x==y)
	{
		printf("The Given Number Is Even");
	}
	else
	{
		printf("The Given Number Is Odd");
	}
	
}
