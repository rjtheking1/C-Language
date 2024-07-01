#include<stdio.h>

int main ()
{
	int x,y;
	
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	
	printf("(x-y)3=%d",(x*x*x) - (y*y*y) - ((3*x*y)*(x+y)));
	
	
}
