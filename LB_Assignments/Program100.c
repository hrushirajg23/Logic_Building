//Accept number of rows and columns from user and display the following pattern

//Input : iRow=4,iCol=4
/*
Output:
        
       
        1  2  3  4
        2  3  4  5
        3  4  5  6
        4  5  6  7

       
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0,k=0;
   
    for(i=1;i<=iRow;i++) 
    {
        k=i;
        for(j=1;j<=iCol;j++)   
        {
            printf("%d\t",k);  
            k++;
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