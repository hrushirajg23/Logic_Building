/*Write a program which accept matrix from user and checks if it is a
Sparse Matrix or not

Sparse matrix is a matrix with majority of its elements equal to zero
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool ChkSparse(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    int iCount=0;
    bool bFlag=false;

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            if(*(*(Arr+i)+j)==0)
            {
                iCount++;
            }
            if(iCount>(iRow*iCol)/2)
            {
                bFlag=true;
                break;
            }
        }
    }
    return bFlag;
    
}

int main()
{
    int iRows=0,iCols=0,iRet=0,iCnt=0;
    bool bRet=false;
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

    
    bRet=ChkSparse(ptr,iRows,iCols);
    if(bRet==true)
    {
        printf("TRUE");
    }
    else {
        printf("FALSE");
    }
    

   
    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        free(*(ptr+iCnt));
    }

    free(ptr);


    return 0;
}