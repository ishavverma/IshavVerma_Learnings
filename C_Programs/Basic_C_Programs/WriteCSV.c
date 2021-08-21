//A C Program to write .csv files.
#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 
int main() 
{ 
    FILE* fp = fopen("E:\\Softwares\\C_Programs\\Ishav_160_C_Programs_Repository\\035_WriteCSV.csv", "a+"); //File path.

    char name[50]; 
    int rollno, marks; 

    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); 
        return 0; 
    }
    // Asking user input for the new record to be added.   
    printf("\nEnter Student Name\n"); 
    scanf("%s", &name); 
    printf("\nEnter Roll Number\n"); 
    scanf("%d", &rollno); 
    printf("\nEnter Attendance\n"); 
    scanf("%d", &marks); 

    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, marks); 

    printf("\nNew student deatils added."); 

    fclose(fp); 
    return 0; 
}