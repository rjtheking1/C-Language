#include<stdio.h>

void main()
{
	//Write a Program to print the Fibonacci series up to N numbers using a for loop.
	int i=1;
	int first=0;
	int second=1,n;
	int ans=first + second;
	
	printf("Enter the value =");
	scanf("%d",&n);
	
	printf("0 1 ");
	for(i=1; i<=n; i++)
	{
		first=second;
		second=ans;
		ans=first+second;
		printf("%d ",ans);
	}

}
