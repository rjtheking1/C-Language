#include<stdio.h>

int  main()
{
	int x,reminder;
	printf("Enter the value of number =");
	scanf("%d",&x);
	
	reminder=x%7;
	if(reminder==0)
	{
		printf("The given number is divisible by 7");
	}
	else
	{
		printf("The given number is not divisible by 7");
	}
	
}
