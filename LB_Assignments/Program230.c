//Write a program which accept matrix from user and swap contents of consecutive rows

#include<stdio.h>
#include<stdlib.h>

void Accept(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",(*(Arr+i)+j));  //Arr[i][j]
        }
    }
}
void Display(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d\t",(*(*(Arr+i)+j)));
        }
        printf("\n");
    }
}

void swapRows(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iTemp=0;

    for(i=0;i<iCol;i++)
    {
        for(j=0;j<iRow;j=j+2)
        {
            iTemp=(*(*(Arr+j)+i));
            (*(*(Arr+j)+i))=(*(*(Arr+j+1)+i));
            (*(*(Arr+j+1)+i))=iTemp;
        }  
    }
    
}

int main()
{
    int iRows=0,iCols=0,iRet=0,iCnt=0,iNo=0;
    printf("\nEnter the number of rows you want : \n");
    scanf("%d",&iRows);
    printf("\nEnter the number of cols you want : \n");
    scanf("%d",&iCols);

    int **ptr=(int **)malloc(sizeof(int *)*iRows);

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        *(ptr+iCnt)=(int *)malloc(sizeof(int)*iCols);
    }

    printf("Enter the elements\n");
    Accept(ptr,iRows,iCols);
    printf("The elements are: \n");
    Display(ptr,iRows,iCols);

    
    swapRows(ptr,iRows,iCols);

    printf("\nAfter swapping \n\n");
    Display(ptr,iRows,iCols);

   
    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}