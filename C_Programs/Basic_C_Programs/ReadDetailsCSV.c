#include <stdio.h>      //Preprocessor directive to include standard input output header file
#include <string.h>     //Preprocessor directive to include string.h header file
//Start of the main body function
int main() {
    FILE *pointer = fopen("E:\\Softwares\\Git_Repository\\Ishav_160_C_Programs_Repository\\036_ReadDetailsCSV.csv","r");
        char temp[1200]; //declaring a buffer variable to store the entire CSV file.
        char rollno[3];
        int row =0,column=0;
        int checker = 0;

        printf("Enter the roll no you want to search: ");
        scanf("%s",&rollno);

        while(fgets(temp,1200,pointer) ) {  //while loop to insert the entire CSV file to temp.
            column=0;
            char *data = strtok(temp,",");  //this statement devides the entire CSV file in parts using strtok function available in string.h

            while(data) {
                if(column==1) { //this statement checks whether the column is equal to 1 i.e roll no column.
                    if(strcmp(rollno,data)==0)  //if strcmp returns 0 i.e token is equal to required number
                        checker =1;             //equate checker to 1.
                }
                if(column ==2) {    //this statement checks whether the column is equal to 2 i.e Attendance Percentage column.
                    if(checker == 1)    //if checker is equal to 1 i.e the value of data is equal to required attendance percentage.
                        printf("Attendance of %s: %s",rollno,data);
                        checker =0;
                }
                data = strtok(NULL,",");    //this statement keeps dividing the temp buffer further and storing the corrosponding values in data variable.
                column++;
            }
            row++;
              }

        return 0;   //return statement
}