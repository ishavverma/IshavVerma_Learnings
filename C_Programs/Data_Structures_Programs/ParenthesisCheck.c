//A C program to check whether a expression is correctly paranthesized or not.                  © Ishav Verma 21/June/2021
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i=0, j, chk, count1, count2, count3;
    printf("Enter Expression: ");
    gets(str); //This will read the expression entered by user.
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]=='('||str[i]==')')
        {
          //This will count the number of times a Parenthesis is entered.
          count1++;
        }
       i++;
    }
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]=='{'||str[i]=='}')
        {
          //This will count the number of times a Parenthesis is entered.
          count2++;
        }
       i++;
    }
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]=='['||str[i]==']')
        {
          //This will count the number of times a Parenthesis is entered.
          count3++;
        }
       i++;
    }
//Common sense **Logic: If a parenthesis is opened then it is needed to be closed, Thus there would be two parenthesis in a pair, So, even number of parenthesis makes a expression valid!...
    if(count1%2==0)
    {      
      if(count2%2==0)
      {
        if(count3%2==0)
        {
          printf("\nExpression is Valid!");
        }
        else
        {
          printf("\nExpression is Invalid!");
        }
      }
      else
      {
        printf("\nExpression is Invalid!");
      }
    }
    else
    {
      printf("\nExpression is Invalid!");
    }
    return 0;
}