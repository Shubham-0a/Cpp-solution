#include<stdio.h>

int main(){

	/* One can use the following code snippet to read two characters in a single line
	char cOne, cTwo;
	scanf("%c%c", &cOne, &cTwo);
	Modify the above code snippet to create a C program that can read a 4 letter word from the
	user and print it in reverse.*/

	char cOne, cTwo, cThree, cThree;
	scanf("%c%c", &cOne, &cTwo, &cThree, &cFour);

	//print character as entered
	printf("character entered are : %c%c%c%c \n",cOne, cTwo, cThree, cFour);

	//pint character in reverse order
	printf("character entered are : %c%c%c%c \n",cFour, cThree, cTwo, cOne);
}