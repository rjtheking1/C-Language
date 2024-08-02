#include<stdio.h>
#include<conio.h>

void main()
{
	//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
	
	char word='a';
	
	do
	{
		if(word=='a'||word=='e'||word=='i'||word=='m'||word=='q'||word=='u'||word=='y')
		{
		printf("%c ",word);
		}
		word++;	
		
	}while(word<='z');
	
	
		
}

