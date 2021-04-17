//A C Program to read the string and give it as output. 			© Ishav Verma 19/March/2021
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: \n");
    scanf("%s", &name); //This will read the name.
    printf("Your name is %s.", name); //This will show (print) the name.
    return 0;
}