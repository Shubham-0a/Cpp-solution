#include<stdio.h>

int main(){
	/* Write a C program that keeps on reading positive integers until an integer entered 
	consecutively, and prints the number of integers read. HINT: You are required to make 
	use of the do-while loop.*/

	int n=2; //data declaration and initialisation
	int i=0; //data declaration and initialisation
	printf("Enter the positive integer n: "); //prints the statement
	scanf("%d",&n); //takes input from the user 
    i=n;
	//print number of integer read
	do{
	i=i+1;
	printf("Enter the positive integer n: "); //prints the statement
	scanf("%d",&n); //takes input from the user 
	}while(n == i);
	
return 0;
}
