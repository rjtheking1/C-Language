#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter the x number :");
	scanf("%d",&x);
	printf("Enter the y number :");
	scanf("%d",&y);
	printf("Enter the z number :");
	scanf("%d",&z);        
	
	(x<y)?(x<z)?printf("x is maximum"):printf("z is maximum"):(y<z)?printf("y is maximum"):printf("z is maximum");
	
}
