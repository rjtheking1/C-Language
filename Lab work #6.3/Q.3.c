#include<stdio.h>
#include<conio.h>

void main()
{	
	int i=1,n,x;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=10)
	{
		x=n*i;
		printf("%d x %d = %d\n",n,i,x);
		i++;
	}

}
