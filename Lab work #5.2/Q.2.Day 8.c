#include<stdio.h>

int main()
{
	//Q.2.Write a Program to find the maximum number from the given 4 numbers using nested if else.
	
	int a,b,c,d;
	
	printf("Enter The Value Of a :");
	scanf("%d",&a);
	
	printf("Enter The Value Of b :");
	scanf("%d",&b);
	
	printf("Enter The Value Of c :");
	scanf("%d",&c);
	
	printf("Enter The Value Of d :");
	scanf("%d",&d);
	
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is Maximum");
			}
			else
			{
				printf("d is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is Maximum");
			}
			else
			{
				printf("d is Maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is Maximum");
			}
			else
			{
				printf("d is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is Maximum");
			}
			else
			{
				printf("d is Maximum");
			}
		}
	}
}
