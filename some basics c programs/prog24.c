#include<stdio.h>

int main(){
	/* Write a C program that takes as input two integers and displays the sum of all even 
	numbers between these them (inclusive).*/

	int a=1,b=2,n=3,m=4,i=5,j=0,k=0;    //data declaration & initialisation

	printf("Enter the first number: "); //prints statement on the screen
	scanf("%d",&a); //takes input from the user

	printf("Enter the second number: "); //prints statement on the screen
	scanf("%d",&b); //takes input from the user

	//display the sum of all even no between a and b(inclusive)
	if(a>b)
	{
	n=a;
	m=b;
	}
	else
	{
	n=b;
	m=a;
	}
		//display all even number between a and b(inclusive)
		for(i=m;i<=n;i++)
		{
			if(i%2==0)
			{
			k=i+j;
			j=k;
			}
		}
	printf("sum of all even number between them: %d\n",j);
	return 0;
}
