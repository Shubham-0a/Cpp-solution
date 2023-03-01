#include<stdio.h>

int main(){
	/* Write a program that takes a valid letter grade (S/A/B/C/D/E) as input and prints its
	respective grade-point (10/9/8/7/6/4). NOTE: If an invalid letter grade is entered, the program
	should display appropriate message.*/

	char grade = 'I';

	printf("Enter the grade\n");
	scanf("%c",&grade);

	if (grade ='A')
	{
			printf("grade point for the entered grade is : '10' ");
	}
	else if (grade ='B')
	{
			printf("grade point for the entered grade is : '9' ");
	}
	else if (grade ='C')
	{
			printf("grade point for the entered grade is : '7' ");
	}
	else if (grade ='D')
	{
			printf("grade point for the entered grade is : '6' ");
	}
	else (grade ='E')
	{
			printf("grade point for the entered grade is : '5' ");
	}
	return 0;
}