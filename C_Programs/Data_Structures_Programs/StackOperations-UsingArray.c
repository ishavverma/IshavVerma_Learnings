//A C program demonstrating stack operations using array.                      © Ishav Verma 27/May/2021
#include<stdio.h>
int stack[100],choice,n,top,i;
void Push(void);
void Pop(void);
void Display(void);
int main()
{
    top=-1;
    printf("\n Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                Push();
                break;
            }
            case 2:
            {
                Pop();
                break;
            }
            case 3:
            {
                Display();
                break;
            }
            case 4:
            {
                printf("\n  Exit Point ");
                break;
            }
            default:
            {
                printf ("\n  Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void Push()
{
    int x;
    if(top>=n-1)
    {
        printf("\n Stack is overflowing");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void Pop()
{
    if(top<=-1)
    {
        printf("\n  Stack is underflowing");
    }
    else
    {
        printf("\n  The Popped element is %d",stack[top]);
        top--;
    }
}
void Display()
{
    if(top>=0)
    {
        printf("\n The elements in stack are: ");
        for(i=top; i>=0; i--)
            printf("%d, ",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The stack is empty");
    }
   
}