#include<stdio.h>

int main(){
	/*  Write a C program that takes two 5-letter words as input and finds the sum of distance between
	respective characters of these words. Examples given in table below:
	Sample Input:							Sample Output:				
	abcde									Distance: 0-0-1-2-0
	abdfe									Output: 3
	Sample Input:							Sample Output:					
	pqxzy									Distance: 1-1-1-25-1
	qpyax									Output: 29						*/
	int a=1,b=2,c=3,d=4,e=5;
	char s1[5],s2[5];
	printf("Enter the first word :");
	
	scanf("%s",s1);

	printf("Enter the second word :");

	scanf("%s",s2);

	a = s1[0]-s2[0];
	b = s1[1]-s2[1];
	c = s1[2]-s2[2];
	d = s1[3]-s2[3];
	e = s1[5]-s2[4];

	printf("Distance: %d-%d-%d-%d-%d \n",a,b,c,d,e);
	printf("output: %d\n",a+b+c+d+e);

	return 0;
}