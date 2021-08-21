//A C Program to perform Search, Insertion & Deletion in an array.              © Ishav Verma June/2021
#include<stdio.h>
#include<stdlib.h>
int main(){
        int capacity = sizeof(arr) / sizeof(arr[0]);
        int n = 10;
        int i, key = 26;
    char operator;
     do{
    printf("Please select the desiered function to be performed:\n ----------------\n 1.Insert\n 2.Delete \n 3.Search\n\n X.Quit\n  ----------------\n Enter your option: ");
    scanf("%c", &operator);
    switch(operator)
    {
        case '1':
        int arr[10];
                printf("Enter 10 elements to array.\n  : ");
                    for(n = 0; n < 10; n++)


        n = insertSorted(arr, n, key, capacity);

        printf("\nResultant Array: ");
        for (i = 0; i < n; i++)
            printf("%d ",arr[i]);

        }
            break;
        case '2':
        int arr[10];
                printf("Enter 10 elements to array.\n  : ");
                    for(n = 0; n < 10; n++)

            break;

        case '3':
        int arr[10];
                printf("Enter 10 elements to array.\n  : ");
                    for(n = 0; n < 10; n++)

            break;
        case 'X':
        printf("Press 0 to exit!\n");
        scanf("%d");
            exit(0);
            break;
    default: printf("\nError encountered by the input values!\n");
             break;
    }while (c != X);

    return 0;
} 

//---------------------------
int findElement(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}

int insertSorted(int arr[], int n, int key, int capacity) {
    if (n >= capacity)
    return n;

    arr[n] = key;

    return (n + 1);
}

int deleteElement(int arr[], int n, int key) {
    int pos = findElement(arr, n, key);

    if (pos == - 1)
    {
        printf("Element not found");
        return n;
    }
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;
}

{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return - 1;
}