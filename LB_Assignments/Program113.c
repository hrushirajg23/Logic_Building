//Accept number of rows and columns from user and display the following pattern

//Input : iRow=4,iCol=4
/*
Output:

        j
         1   2   3   4   5   6

  i 1    *   *   *   *   *   *     
    2    *               *   *
    3    *           *       *
    4    *       *           *   
    5    *   *               *   
    6    *   *   *   *   *   *

    
*/

#include<stdio.h>


void Pattern(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            if(i==j)
            {
                printf("*\t");
            }
            else if(i==iRow || j==iCol || i==1 || j==1 )
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;
    printf("\nEnter the number of rows and columns\t");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}