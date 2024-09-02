#include<stdio.h>

void main() 
{
    int x,y,i,j,max;
    
	printf("Enter The Number Of  Rows In The Array :");
	scanf("%d",&x);
	
	printf("Enter The Number Of  Columns In The Array :");
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
	max = a[0][0];
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
			}
		}
	}	
	printf("Maximum Value Is %d ",max);

}


