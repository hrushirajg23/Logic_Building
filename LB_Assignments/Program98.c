//Accept number of rows and columns from user and display the following pattern

//Input : iRow=5,iCol=5
/*
Output:
        
       a b c d e
       1 2 3 4 5
       a b c d e
       1 2 3 4 5
       a b c d e
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';
   
    for(i=1;i<=iRow;i++) 
    {
        
        for(j=1,ch='a';j<=iCol;ch++,j++) 
        {
            if(i%2==0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
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