#include <stdio.h>

int main(){

	/* Write a C program that takes an integer as input, and display whether this integer is negative,
	positive or zero. */
	
	int num = 0;

	scanf("%d",&num);

	if (num>0)
	{
		printf("entered number is positive\n");
	}
	else if (num<0)
	{
		printf("entered number is negative\n");
	}
	else if (num=0)
	{
		printf("entered number is zero\n");
	}
	else
	{
		printf("enter the valid number");
	}
	return 0;
}