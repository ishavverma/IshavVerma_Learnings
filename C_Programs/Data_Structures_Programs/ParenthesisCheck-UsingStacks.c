//A C program to check whether a expression is correctly paranthesized or not using stacks.                  © Ishav Verma 21/June/2021
#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
int top=-1;      
int i;             
char Stack[50];                         
void push(char str)
{
      //top>=n-1;
      top++;
      Stack[top]=i;
}                     
void pop()
{
      if (top == -1) 
      {
            printf("Invalid Expression! \n Please enter opening bracket\n");
      }
      else
      {
            top--;
      }
}
int main() 
{
      int opt;             
      char str[50];
      do{
      printf("1.Check the Parenthesis of the expression\n");
      printf("2.Exit the Program\n");
      printf("Enter your choice: ");
      scanf("%d",&opt);
            switch (opt)
            {
                  case 1:
                        printf("\nEnter expression: ");
                        scanf("%s",str);
                        printf("\nPress any key to continue\n");
                        getch();
                        for (i = 0; str[i] != '\0';i++) 
                        {
                              if (str[i] == '(' || str[i]=='[' || str[i]=='{')
                              {
                                    push(str[i]);
                              }
                              else if (str[i] == ')' || str[i]==']' || str[i]=='}')
                              {
                                    pop();
                              }
                        }
                       if(top==-1) 
                                  {
                               printf("\nValid Expression!\n");
                              }
        else
            {
                printf("\nInalid Expression!");
                        break; 
                  case 2:
                        printf("Exiting program\n");
                        break;
                  default:
                              printf("\nWrong choice\n");
            }
      }
      printf("\n\n");
      }while(opt!=2);
      return 0;
}