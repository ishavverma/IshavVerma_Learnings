//A C program to insert, delete & search an element in an user defined array.        © Ishav Verma 26/May/2021
#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[20], i, c, n, X, value, PositionOfInsert, PositionOfDelete, SearchElement, found;
    char operator;
 do{
    printf("Please select the desiered function to be performed:\n ----------------\n 1.Insert\n 2.Delete \n 3.Search\n\n X.Quit\n  ----------------\n Enter your option: ");
    scanf("%c", &operator);
    printf("\n     -----     \n");
    switch(operator)
    {
        case '1':
        printf("Inserting an element to the array!!\n\n");
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++) //For loop for scanf function will be executed untill it gets 10 input values by user.     
                scanf("%d", &array[c]);

                printf("Enter the location to insert the element in array: ");
                scanf("%d", &PositionOfInsert);
                    printf("Enter the value to insert at position %d: ", PositionOfInsert);
                    scanf("%d", &value);

                        //This step will insert the user entered number in the array at specified location and will shift the following elements a step forward.
                        for(c = 10-1; c >= PositionOfInsert-1; c--)
                            array[c+1] = array[c]; 
                        array[PositionOfInsert - 1] = value;
                        printf("Resultant array is: ");
                            for(c = 0; c <= 10; c++)
                                printf("%d  ", array[c]);
                            printf("\n\n     -----     \n\n");
            break;
        case '2':
        printf("Deleting an element from the array!!\n\n");
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++)
                scanf("%d", &array[c]);
                    printf("Enter the location of element you want to Delete: ");
                    scanf("%d", &PositionOfDelete);
                        //This step will delete the number in the array at specified location based on user input and will shift the following elements a step backward.
                        for (c = PositionOfDelete - 1; c < 10 - 1; c++)
                            array[c] = array[c+1];
                        printf("Resultant array:");
                          for (c = 0; c < 9; c++)
                             printf("%d ", array[c]);
                            printf("\n\n     -----     \n\n");
            break;

        case '3':
        printf("Searching an element in the array!!\n\n");
                printf("Enter 10 elements to array.\n");
                    for(c = 0; c < 10; c++)
                        
                scanf("%d", &array[c]);
                printf("Enter value of element to search: ");
                scanf("%d", &SearchElement);

                found = 0;

                for(c = 0; c < 10; c++)
                {
                    // This steep will determine whether the number entered by user matches any element stored in array.
                    if(array[c] == SearchElement)
                    {
                        found = 1;
                        break;
                    }
                }
                if(found == 1)
                {
                    printf("The element is at %d\n", c+1);
                }
                else
                {
                   printf("Element not found!"); 
                }
                            printf("\n\n     -----     \n\n");                
            break;
        case 'X':
        printf("Press 0 & hit Enter to exit!\n");
        scanf("%d"); //It would not store any value just added in order to make function move toward next step i.e. exit(0).
            exit(0);
            break;
    default: printf("\nError encountered by the input values!\n");
                                printf("\n\n     -----     \n\n");
             break;
    }
} while (c != X);
    return 0;
}