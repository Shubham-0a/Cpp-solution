#include <stdio.h>

int main(){

	/* Write a C program that takes a floating-point value as input and prints its absolute value.*/

	float num =1.3;
	
	scanf("%f",&num);

	printf("you have entered : %f\n",num);

	if (num>0)
	{
		printf("absolute value of the entered floating number is : %f",num);
	}
	else
	{
	printf("absolute value of the entered floating number is : %f",-num);
	}
	return 0;
}