#include<stdio.h>
#include<conio.h>

void main()
{
	//Develop a Program to count the total number of digits in a number.
	
	int i=1,n;
	printf("Enter the number =");
	scanf("%d",&n);
	
	while(n>9)
	{
		n = n/10;
		i++;
	}
	printf("Your number are %d digit number",i);
	
	
	
}
