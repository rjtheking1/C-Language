#include<stdio.h>

void main()
{
	//Write a Program to print and find the sum of all boundary elements from a given 5x5
	//2D array.
	
	int i,j,sum=0;

	
	int a[5][5];
	printf("Enter The Value of Array :\n");
	
	for(i=0; i<5; i++) 
	{
		for(j=0; j<5; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<5; i++) 
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	
	for(i=0; i<5; i++) 
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				sum = sum+a[i][j];
			}
			else if(i==1 && j==0 || i==2 && j==0 || i==3 && j==0)
			{
				sum = sum+a[i][j];
			}
			else if(i==1 && j==4 || i==2 && j==4 || i==3 && j==4)
			{
				sum = sum+a[i][j];
			}
		}
	}
	
	printf("Sum is %d ",sum);
}
