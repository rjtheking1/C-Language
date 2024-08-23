#include<stdio.h>

void main()
{
	//Write a Program to find the average of a given 2D array
	.
	int i,j,r,c;
	
	printf("Enter the number of rows for the array=");
	scanf("%d",&r);
	
	printf("Enter the number of column for the array=");
	scanf("%d",&c);	
	
	int a[r][c];
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	
	
}
