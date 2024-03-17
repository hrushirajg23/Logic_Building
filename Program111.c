
//Display Patten

/*      iRow=4;
        iCol=4;
        
        * * * * 
        * $ $ *
        * $ $ *
        * * * *

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++) //outer loop
    {
        for(j=1;j<=iCol;j++) //Inner loop
        {
            if((i==1) || (j==1) ||(i==iRow) ||(j==iCol))  //OR operator use kelay karan eka veles sagle conditions true nahi honar, eka veles ekach condition true asu shakte
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
             
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