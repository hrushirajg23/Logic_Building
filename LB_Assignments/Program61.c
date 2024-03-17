//Accept N numbers from user and return the difference between summation of even elements and odd elements 

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
    int iCnt=0;
    int iEvenSum=0,iOddSum=0;
    int iDiff=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenSum=iEvenSum+Arr[iCnt];
        }
        else
        {
            iOddSum=iOddSum+Arr[iCnt];
        }
    }
    iDiff=iEvenSum-iOddSum;
    return iDiff;
}

int main()
{
    int iSize=0,iRet=0  ;
    int iCnt=0;  //counter
    int *p=NULL;

    printf("\nEnter the Count of numbers:");
    scanf("%d",&iSize);

    p=(int*)malloc(sizeof(int)*iSize);
    
    if(p==NULL)
    {
        printf("\nUnable to allocate memory!");
        return -1;
    }

    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter the  element %d:  ",iCnt+1);
        scanf("%d",&p[iCnt]);    //Internally considered as (p+iCnt)
    }

    iRet=Difference(p,iSize);

    printf("\nResult is %d",iRet);

    free(p);

    return 0;
}