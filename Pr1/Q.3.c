#include<stdio.h>

int main()
{
	int angleA,angleB,angleC;
	printf("Enter angleA =");
	scanf("%d",&angleA);
	
	printf("Enter angleB=");
	scanf("%d",&angleB);
	
	angleC=180 - (angleA + angleB);
	printf("angleC=%d",angleC);
}


