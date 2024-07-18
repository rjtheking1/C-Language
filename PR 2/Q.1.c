#include <stdio.h>

int main()
{
	int marks;
	char grade;
	printf("Enter the marks =");
	scanf("%d",&marks);
	
	(marks>=80 && marks<=100)?grade='A':
			(marks>=70 && marks<80)?grade='B':
				(marks>=60 && marks<70)?grade='C':
					(marks>=50 && marks<60)?grade='D':
						(marks>=40 && marks<50)?grade='E':
							(marks>=0 && marks<40)?grade='F':
								printf("Enter your valid score");
		
	switch(grade)							
	{
		case 'A':printf("Your grade is A,\nExcellent work");
		break;
		
		case 'B':printf("Your grade is B,\nWell Done");
		break;
		
		case 'C':printf("Your grade is C,\nGood job");
		break;
		
		case 'D':printf("Your grade is D,\nEven do Better");
		break;
		
		case 'E':printf("Your grade is E,\nTry Do better");
		break;
		
		case 'F':printf("Your grade is E,\nyou are fail");
		break;
	}							
	
	if(grade=='A'|| grade=='B'|| grade=='C'||grade=='D'||grade=='E'||grade=='F')
	{
		printf("\nYou are eligible for next the next level");
	}
	else
	{
		printf("\nYou are not eligible for the next level");
	}
	
	
							
}


