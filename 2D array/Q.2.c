#include<stdio.h>

void main()
{
	//WAP to find length of 2D array.
	
	int r,c,i,j;
	
	printf("Enter the number of row for the array=");
	scanf("%d",&r);
	
	printf("Enter the number of column for the array=");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter The Value of Array :\n");
	
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
	printf("\n");	
	
	printf("The Length Of Array is %d ",r*c);
}