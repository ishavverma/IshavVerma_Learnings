//A C Program to calculate sum of 2D Array.
#include <stdio.h>
#define MAXROW		10
#define MAXCOL		10

int main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	int sum,product;
	
	printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);

	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	//Sum and product of all elements.
	//Initializing sun and product variables.
	sum		=0;
	product	=1;
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
		}
	
	}

	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
	return 0;	
}