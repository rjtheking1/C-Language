#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("Enter the x number :");
	scanf("%d",&x);
	
	printf("Enter the y number :");
	scanf("%d",&y);
	
	printf("Enter the z number :");
	scanf("%d",&z);
	
	(x<y)?(x<z)?printf("x is minimum"):printf("z is minimum"):(y<z)?printf("y is minimum"):printf("z is minimum");
	
}