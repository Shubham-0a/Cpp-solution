#include<stdio.h>

int main(){
	/* Write a C program that takes as input a positive integer and prints the number of 
	occurrences of 0,1,2,3,4,5,6,7,8,9 in it.*/

	int number,digit,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9; //data declaration
	number=23,digit=0,t0=0,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0; //initialisation

	printf("Enter the positive integer: "); //prints the statement
	scanf("%d",&number); //takes input from the user 

	//number of occurence of 0,1,2,3,4,5,6,7,8 and 9 in number
	while(number!=0)
	{
	digit=number%10;
	number=number/10;
		if(digit==0)
		{
		t0++;
		}
		else if(digit==1)
		{
		t1++;
		}
		else if(digit==2)
		{
		t2++;
		}
		else if(digit==3)
		{
		t3++;
		}
		else if(digit==4)
		{
		t4++;
		}
		else if(digit==5)
		{
		t5++;
		}
		else if(digit==6)
		{
		t6++;
		}
		else if(digit==7)
		{
		t7++;
		}
		else if(digit==8)
		{
		t8++;
		}
		else	//(digit==9)
		{
		t9++;
		}	
	}

	//prints the number of occurrences of 0,1,2,3,4,5,6,7,8,9 in it.*/
	printf("The number of occurrences of 0 is %d \n1 is %d \n2 is %d \n3 is %d \n4 is %d \n5 is %d \n6 is %d \n7 is %d \n8 is %d \n9 is %d in it.", t0, t1, t2, t3, t4, t5, t6, t7, t8, t9);
	
return 0;
}
