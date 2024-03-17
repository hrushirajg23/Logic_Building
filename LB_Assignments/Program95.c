//Accept number of rows and columns from user and display the following pattern

//Input : iRow=3,iCol=4
/*
Output:
        
    

        1  2  3  4
        5  6  7  8
        9  10  11  12
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=1,k=1;
   
    for(i=1;i<=iRow;i++) //1 2 3
    {
        for(j=1;j<=iCol;j++) // 1 2 3 4//1 2 3 4// 1 2 3 4
        {
            printf("%d\t",k);//1 2 3 4 //5 6 7 8// 9 10 11 12
            k++;    //2 3 4 5 6 7 8 9 10 11 12 13 //
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