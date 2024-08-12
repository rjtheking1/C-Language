#include<stdio.h>
#include<conio.h>

void main()
{
	//A
	//B C
	//D E F
	//G H I J
	//K L M N O

	int i,n;
	char ch='A';
	
	for(i=1; i<=5; i++)
	{
		for(n=1; n<=i; n++)
		{
			printf("%c ",ch);
			ch++;	
		}
		printf("\n");
	}
}