//Accept number of rows and columns from user and display the following pattern

//Input : iRow=5,iCol=5
/*
Output:
        
       2 4 6 8 10
       1 3 5 7 9
       2 4 6 8 10
       1 3 5 7 9
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0,k=1;
   
    for(i=1;i<=iRow;i++) 
    {
        if(i%2==0)
        {
            k=1;
        }
        else
        {
            k=2;
        }
        for(j=1;j<=iCol;j++) 
        {
            printf("%d\t",k);
            k=k+2;
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