//A basic C Program to calculate sum of two numbers.				© Ishav Verma 18/March/2021
#include<stdio.h>
int main(){
	int number1, number2, sum;
	scanf("%d %d", &number1, &number2); //Scanning values entered by user.
	sum=number1+number2; //Processing the sum operation.
	printf("Sum of 2 numbers= %d", sum); //Printing the output.
	return 0;
}