#include<stdio.h>

int main(){
	//Write a C program that takes as input two integers and displays all multiples of 7 between them (inclusive of the end points).

	int a=1,b=2,m=2,i=3,n=4;    //data declaration & initialisation

	printf("Enter the first number: "); //prints statement on the screen
	scanf("%d",&a); //takes input from the user

	printf("Enter the second number: "); //prints statement on the screen
	scanf("%d",&b); //takes input from the user
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
		//display all multiple of 7 between a and b(inclusive)
		for(i=m;i<=n;i++)
		{
			if(i%7==0)
			{
			printf("%d\n",i);
			}
		}
	return 0;
}
