#include<stdio.h>
#include<conio.h>

void main()
{

	int i=1;
	int n ,sum=0;

	printf("Entre n value:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);
	
}
