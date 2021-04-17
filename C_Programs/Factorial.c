//A C Program to calculate Factorial of a number.               © Ishav Verma 18/March/2021
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    //It will scan the number entered by user.
    for(i=1;i<=number;i++){    
      fact=fact*i;   //Formula 
  }    
  printf("Factorial of %d is: %d",number,fact);    //This will give us output.
return 0;  
}