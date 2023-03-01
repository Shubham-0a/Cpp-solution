#include<stdio.h>

int main(){
	/* Write a C program that takes as input a positive integer and checks if it is a 
	palindrome. HINT: use while loop.*/

	int num,original,remainder=0,reverse=0; //data declaration
	num=2; //initialisation

	printf("Enter the positive integer: "); //prints the statement
	scanf("%d",&num); //takes input from the user 

	//check if it is palidrome
	//finding reverse
	original=num;
	while(num!=0)
	{
	remainder=num%10;
	reverse=reverse*10+remainder;
	num=num/10;
	}
	printf("the reverse is: %d\n",reverse);
	if(original==reverse)
	{
	printf("%d is a palindrome number", original);
	}
	else
	{
	printf("%d is not a palindrome number", original);
	} 
return 0;
}
