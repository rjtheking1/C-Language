#include<stdio.h>

int main()
{
	int x,reminder;
	
	printf("Enter the value of number =");
	scanf("%d",&x);
	
	reminder=x%2;
	if(reminder==1)
	{
		printf("The given number Is odd");
	}
	else
	{
		printf("The given number Is even");
	}
}
