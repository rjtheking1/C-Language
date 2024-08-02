#include<stdio.h>
#include<conio.h>

void main()
{
	//Develop a Program to find the sum of a number's first and last digits.
	
	int i=1,n,ld;

	printf("Enter the number =");
	scanf("%d",&n);
	ld= n%10;
	
	while(n>9)
	{
		n = n/10;
	}
	printf("First digit =%d \n\n",n);
	printf("Last digit =%d \n\n",ld);
	printf("sum of first and last digit is = %d" ,n+ld);
}
