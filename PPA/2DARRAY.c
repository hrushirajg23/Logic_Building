/*
2D array

program to accept value in 2x3 matrix and display the values on screen;



*/


#include <stdio.h>
#define rows 2
#define columns 3


int main()
{
    int a[rows][columns];
    int i,j;

    //i is for index of rows
    //j is for index of columns of that row

    printf("\nenter the values in 2x3 matrix: ");

    for(i=0;i<=1;i++){
        //since rows are 2; i=0 is 1st row & i=1 is the 2nd row

        for(j=0;j<=2;j++)//since columns are 3
        {
            scanf("%d",&a[i][j]);
        }

       

    }
    printf("\nThe elements in 2D array are: ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d",a[i][j]);
        }
        
        
        
    }


    return 0;
}