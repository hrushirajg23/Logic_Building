//Accept number of rows and columns from user and display the following pattern

//Input : iRow=4,iCol=4
/*
Output:

         1   2   3   4   i

    1    *   *   *   #
    2    *   *   #   *
    3    *   #   *   *
    4    #   *   *   *

    j
*/

#include<stdio.h>


void Pattern(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)  //1
    {
        for(j=iCol;j>=1;j--)  //4
        {
            if(i==j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
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