#include<stdio.h>
#include<conio.h>

void main()
{
	//A
	//A B
	//A B C
	//A B C D
	//A B C D E
	
	char i,n;
	
	for(i='A'; i<='E'; i++)
	{
		for(n='A'; n<=i; n++)
		{
			printf("%c ",n);	
		}
		printf("\n");
	}
}