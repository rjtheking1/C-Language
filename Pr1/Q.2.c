#include<stdio.h>

int main() {
	int basesalary,grosssalary,HRA,TA,DA;

	HRA=10;
	DA=5;
	TA=8;

	printf("enter your base salary=");
	scanf("%d",&basesalary);

	grosssalary=basesalary+(basesalary*HRA/100)+(basesalary*DA)/100+(basesalary*TA)/100;
	printf("Your gross salary:%d",grosssalary);
}