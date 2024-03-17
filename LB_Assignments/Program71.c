//Accept N numbers from user and accept one another number as NO and check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int *Arr,int iLength,int iNo)
{
    bool bFlag=false;
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int *p=NULL;
    bool bRet=false;

    printf("\nEnter the number of elements: ");
    scanf("%d",&iSize);

    printf("\nEnter the number whose frequency you want to find: ");
    scanf("%d",&iValue);

    p=(int*)malloc(sizeof(int)*iSize);

    if(p==NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }
    printf("Enter the %d Elements",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter the element %d\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    bRet=Check(p,iSize,iValue);

    if(bRet==true)
    {
        printf("%d is present ",iValue);
    }
    else
    {
        printf("%d is absent ",iValue);
    }
    return 0;
}