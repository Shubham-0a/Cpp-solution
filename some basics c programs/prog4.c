#include<stdio.h>

int main(){
	
	/*Write a C program that takes the length and breadth of a rectangle as input and prints its area
	and perimeter. NOTE: If the inputs are invalid, your program should display an appropriate
	message.*/

	float length = 2,breadth = 1,area = 2, perimeter = 3;

	//takes input from the user as length
	printf("Enter the value of length of rectangle :");
	scanf("%2f",&length);

	//takes input from the user as breadth
	printf("Enter the value of breadth of rectangle :");
	scanf("%2f",&breadth);

	//assigning value of area as product of length and breadth
	area = length*breadth;
	//assigning value of perimeter as relation of length and breadth
	perimeter = 2*(length+breadth);

	//prints the value of area assigned
	printf("area of rectangle is : %2f\n",area);
	//prints the value of perimeter assigned
	printf("perimeter of rectangle is : %2f\n",perimeter);

	return 0;
}