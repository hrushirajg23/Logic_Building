//Write a program which accept matrix from user and reverse contents of each column

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

void ReverseCol(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iTemp=0;

    for(i=0;i<iCol;i++)
    {
        for(j=0;j<iRow/2;j++)
        {
            iTemp=(*(*(Arr+j)+i));
            (*(*(Arr+j)+i))=(*(*(Arr+iRow-1-j)+i));
            (*(*(Arr+iRow-1-j)+i))=iTemp;
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

    
    ReverseCol(ptr,iRows,iCols);

    printf("\nAfter ReverseCol \n\n");
    Display(ptr,iRows,iCols);

   
    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}