
//Display Patten

/*
        * * * *
        * * * *
        * * * *
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
    
}

int main()
{
    int iNo1=0,iNo2=0;
    printf("\nenter no of rows: ");
    scanf("%d",&iNo1);
    printf("\nenter no of cols: ");
    scanf("%d",&iNo2);    
    
    Display(iNo1,iNo2);
    return 0;
}