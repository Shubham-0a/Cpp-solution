#include<stdio.h>
int main(){
	
	/* Write a C program that takes a 2-letter word as input and prints it in capital letters. NOTE:
	If the inputs are invalid, your program should display an appropriate message. */

	//char letter1,letter2;
	string s[3];

	printf("enter the two letter word :\n");
	scanf("%s%s\n",s[1],s[2]);

	for(i = 0; s[i]!='\0'; i++)
	{
		if (s[i] <= 'a' && s[i] >= 'z')
		{
			s[i] = s[i] - 32;
			printf("two letter word in upper case are : %s",s[i]);
		}
		else 
		{
			printf("input are invalid\n");
		}
	}
	return 0;
}