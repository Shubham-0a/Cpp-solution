#include<stdio.h>

int main(){

	/*Write a C program that takes three integers as input and prints the minimum of these three
	values.*/

	int a = 2,b = 3,c = 4;
	
	printf("enter the first integer\n");
	scanf("%d",&a);
	printf("enter the second integer\n");
	scanf("%d",&b);
	printf("enter the third integer\n");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		if (b>c)
		{
			printf("minimum of three number is : %d",c);
		}
		else if (b<c)
		{
			printf("minimum of three number is : %d",b);
		}
		else
		{
			printf("b and c are equal .minimum of three number is : %d",c);
		}
	}
	else if (b>a && b>c)
	{
		if (a>c)
		{
			printf("minimum of three number is : %d",c);
		}
		else if (a<c)
		{
			printf("minimum of three number is : %d",a);
		}
		else
		{
			printf("a and c are equal .minimum of three number is : %d",c);
		}
	}
	else if (c>a && c>b)
	{
		if (a>b)
		{
			printf("minimum of three number is : %d",b);
		}
		else if (a<b)
		{
			printf("minimum of three number is : %d",a);
		}
		else
		{
			printf("a and c are equal .minimum of three number is : %d",a);
		}
	}
	return 0;
}