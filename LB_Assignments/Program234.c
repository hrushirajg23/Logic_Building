//Write a program which accept matrix from user and checks if it is an identity matrix

/*
1   0   0   0
0   1   0   0
0   0   1   0
0   0   0   1

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

bool CheckIdentity(int **Arr,int iRow,int iCol)
{
    int i=0,j=0;
    bool bFlag=true;

    for(i=0;i<iRow;i++)
    {
        if(*(*(Arr+i)+i)!=1)
        {
            bFlag=false;
            break;
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

    
    bRet=CheckIdentity(ptr,iRows,iCols);
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