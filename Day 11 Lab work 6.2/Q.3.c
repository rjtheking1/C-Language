#include<stdio.h>

void main()

//Write a Program to print even numbers from 1 to N using a do-while loop.

{
	int i=1,n;
	printf("Enter n=");
	scanf("%d",&n);
	
	do
	{
		if(i%2==0)
		printf("%d ",i);
		i++;
	}while(i<=n);
	
}
