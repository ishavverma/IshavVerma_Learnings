//A C Program to find maximum among 3 numbers.              © Ishav Verma
#include <stdio.h>//preprocessor directive to include standard input or output header file. 
 
void main()
{
    int num1, num2, num3;//Declare integer and  its variable
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);//Enter the value of num1 num2 num3 by user
    if (num1 > num2)
    {
        if (num1 > num3)//if num1 is is less than num3 is true 
        {
            printf("num1 is the greatest among three \n");
        }
        else//if the condition false it print this
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)//if num2 is less then num3
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}