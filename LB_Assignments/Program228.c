//Write a program which accept matrix and one number from user and return largest number from both the diagonals

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

int MaxDiagonal(int **Arr,int iRow,int iCol)
{
    int i=0,j=0,iMax1=0,iMax2=0;

    iMax2=(*(*(Arr+0)+iCol-1));
    iMax1=(*(*(Arr+0)+0));

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if((i+j)==iCol-1)
            {
                if((*(*(Arr+i)+j))>iMax2)
                {
                    iMax2=(*(*(Arr+i)+j));  //Arr[i][j]
                }
            }
            if(i==j)
            {
                if((*(*(Arr+i)+j))>iMax1)
                {
                    iMax1=(*(*(Arr+i)+j));
                }
            }
        }
        
    }
    if(iMax1>iMax2)
    {
        return iMax1;
    }
    else
    {
       return iMax2;
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

    
    iRet=MaxDiagonal(ptr,iRows,iCols);

    printf("MaxDiagonalis %d\n",iRet);

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}