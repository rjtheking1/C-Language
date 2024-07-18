#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter Marks Of Maths :");
	scanf("%d",&x);
	
	printf("Enter Marks Of English :");
	scanf("%d",&y);
	
	printf("Enter Marks Of Science :");
	scanf("%d",&z);
	
	if(x>100)
	{
		printf("Enter Valid Marks !!!");
	}
	else if(y>100)
	{
		printf("Enter Valid Marks !!!");
	}
	else if(z>100)
	{
		printf("Enter Valid Marks !!!");
	}
	else if(x<0)
	{
		printf("Enter Valid Marks !!!");
	}
	else if(y<0)
	{
		printf("Enter Valid Marks !!!");
	}
	else if(z<0)
	{
		printf("Enter Valid Marks !!!");
	}
	else
	{
		printf("Average = %d",(x+y+z)/3);
	}
}
