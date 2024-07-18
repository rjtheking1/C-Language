#include<stdio.h>

int main()
{
	int x;
	printf("Enter any Number : ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("The number Is Positive");
	}
	
	else if(x<0)
	{
		printf("The number Is Negative");
	}
	
	else
	{
		printf("The number Is Neutral");
	}
}
