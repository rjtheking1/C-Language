#include<stdio.h>

int main()
{
	float celcius,fahrenheit;
	printf("enter the temperature=");
	scanf("%f",&celcius);
	
	fahrenheit = (celcius*9)/5+32;
	printf("fahrenheit = %.3f",fahrenheit);
	
}