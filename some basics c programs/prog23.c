#include<stdio.h>

int main(){
	/* Write a C program that takes a positive integer n as its input and print all
	Fibonacci numbers less than or equal to n.*/

	int n0=0,n1=1,i=1,n=1; //data declaration and initialisation
	int nextn = n0 + n1; //data declaration and initialisation

	printf("Enter the positive integer n: "); //prints the statement
	scanf("%d",&n); //takes input from the user 

	//printing all fibonacci number less than or equal to n
	printf("fibonacci series: %d, %d, ", n0, n1);

	for(i=3;i<=n;i++)
	{
		printf("%d, ",nextn);
		n0=n1;
		n1=nextn;
		nextn=n0+n1;
	}
	printf("\n");
	return 0;
}
