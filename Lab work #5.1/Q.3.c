#include <stdio.h>

int main()
{
	int x,y,z;
	printf("enter your maths mark=");
	scanf("%d",&x);
	
	printf("enter your english mark=");
	scanf("%d",&y);
	
	printf("enter your science mark=");
	scanf("%d",&z);
	
	if(x>100)
	{
		printf("Enter your valid marks");
	}
	
	else if(y>100)
	{
		printf("Enter your valid marks");
	}
	
	else if(z>100)
	{
		printf("Enter your valid marks");
	}
	
	else if(x<0)
	{
		printf("enter valid marks");
	}
	
	else if(y<0)
	{
		printf("enter valid marks");
	}
	
	else if(z<0)
	{
		printf("enter valid marks");
	}
	
	else
	{
		printf("Average = %d",(x+y+z)/3);
	}
}