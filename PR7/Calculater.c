#include<stdio.h>

//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.


int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;	
}

int product(int a,int b)
{
	return a*b;	
}

int divide(int a,int b)
{
	return a/b;	
}

int mode(int a,int b)
{
	return a%b;	
}
void main()
{
	
	int choice,n1,n2;
	
	restart:
	
	printf("\nPress 1 for +\n");
	
	printf("Press 2 for -\n");
	
	printf("Press 3 for *\n");
	
	printf("Press 4 for /\n");
	
	printf("Press 5 for %%\n");
	
	printf("Press 0 for exit\n");
	
	
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		goto end;
	}
	
	printf("\nEnter the first number : ");
	scanf("%d",&n1);
	
	printf("\nEnter the second number : ");
	scanf("%d",&n2);	
	
	switch(choice)
	{
		case 1 : printf("\nThe Sum of %d and %d is %d.\n",n1,n2,sum(n1,n2));
		break;
		
		case 2 : printf("\nThe Substraction of %d and %d is %d.\n",n1,n2,sub(n1,n2));
		break;
		
		case 3 : printf("\nThe Multiplication of %d and %d is %d.\n",n1,n2,product(n1,n2));
		break;
		
		case 4 : printf("\nThe Division of %d and %d is %d\n",n1,n2,divide(n1,n2));
		break;
		
		case 5 : printf("\nThe Module of %d and %d is %d.\n",n1,n2,mode(n1,n2));
		break;
		
		
		default : printf("\nEnter valid choice....");
	}
	
	goto restart;
	
	end:
	printf("\nThe program has been ended");
}
