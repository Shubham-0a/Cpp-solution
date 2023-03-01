#include<stdio.h>

int main(){
/*Write a C program that takes as input the coefficients of the quadratic equation ax2+bx+c = 0
and prints if the roots are complex or real.*/

	unsigned a ,b ,c ,discriminant;

	printf("the coefficients of the quadratic equation\n");
	
	//takes input gfrom the user as the value of a
	printf("enter the coefficients of x2\n");
	scanf("%d",&a);
	
	//takes input from the user as the value of b
	printf("enter the coefficients of x\n");
	scanf("%d",&b);
	
	//takes input from the user as the value of c
	printf("enter the constant\n");
	scanf("%d",&c);
	
	discriminant = (b*b)-(4*a*c);

	if (discriminant>=0)
	{
		printf("The roots are real.");
	}
	else (discriminant<0)
	{
		printf("The roots are complex.");
	}
	return 0;
}