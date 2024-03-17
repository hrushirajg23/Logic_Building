//Program which accepts matrix from user and return addition of diagonal elements
//using c programming
#include<stdio.h>
#include<stdlib.h>

void Accept(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            scanf("%d",(*(Arr+i)+j));
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

int AddDiagonal(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iSum=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(i==j)
            {
                iSum=iSum+(*(*(Arr+i)+j));
            }
        }
        
    }
    return iSum;
}

int main()
{
    int iRows=0,iCols=0,iRet=0,iCnt=0;
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

    iRet=AddDiagonal(ptr,iRows,iCols);

    printf("Summation of diagonal elements is %d\n",iRet);

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}