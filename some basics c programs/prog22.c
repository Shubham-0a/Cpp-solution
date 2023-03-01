#include<stdio.h>

int main(){
	/*Write a C program that takes as input a 2-letter word and counts the number of vowels and consonants in them.
	NOTE: You are required to make use of switch statement.*/
	char a='a',b='b';

	printf("Enter two letter word");
	scanf("%c",&a);
	scanf("%c",&b);

	printf("Enter two letter word: ");
	printf("You have entered: %c%c\n",a,b);

	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
		{
		printf("number of vowels in the entered word is: 2");
		}
		else
		{
		printf("number of vowels in the entered word is: 1");
		}
	}
	else if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'||b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
	{
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		{
		printf("number of vowels in the entered word is: 2");
		}
		else
		{
		printf("number of vowels in the entered word is: 1");
		}
	}
	else
	{
		printf("number of vowels in the entered word is: 0");
	}
	return 0;
}
		
