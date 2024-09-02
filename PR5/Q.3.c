#include<stdio.h>

void main()
{
	int x,y,i,j;
	
	printf("Enter The Number Of  Rows In The Array =");
	scanf("%d",&x);
	
	printf("Enter The Number Of  Columns In The Array =");
	scanf("%d",&y);
	
	int a[x][y];
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("Enter The Value Of a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Before\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("After\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("%d ",a[j
			][i]);
		}
		printf("\n");
	}
}
