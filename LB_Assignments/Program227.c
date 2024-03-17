//Write a program which accept matrix and one number from user and return freuqncy of that number

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

int Frequency(int **Arr,int iRow,int iCol,int iNo)
{
    int i=0,j=0,iFreq=0;
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(*(*(Arr+i)+j)==iNo)
            {
                iFreq++;
            }
        }
        
    }
    return iFreq;
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

    printf("Enter the number whose frequncy you want to check\n");
    scanf("%d",&iNo);
    iRet=Frequency(ptr,iRows,iCols,iNo);

    printf("Frequency of given number is %d\n",iRet);

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}