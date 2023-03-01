#include<stdio.h>

int main(){
	/* Write a C program that takes a positive integer as input and checks whether it is 
	prime. HINT: Check divisibility till square root of the given number and use while loop. 
	You are not allowed to use the sqrt() function.*/

	int number; //data declaration
	number=2; //initialisation
	int l=1,n=1;

	printf("Enter the positive integer: "); //prints the statement
	scanf("%d",&number); //takes input from the user

	//checking factor of a number
	do{
		if(number%l==0)
		{
		n=l;
		}
	l=l+1;		
	}
	while(l!=(number/2)+1);

	//check wether it is prime
	if (n==1)
	{
	printf("%d is a prime number.\n", number);
	}
	else
	{
	printf("%d is a not prime number.\n", number);
	}
return 0;
}
