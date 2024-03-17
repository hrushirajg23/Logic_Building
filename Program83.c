//Write a program to accept N numbers from user and accept a number and find frequency of that number


#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iSize,int iNo)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)   
    {    
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{   
    int iCount=0;
    int *ptr=NULL;
    int iRet=0;
    int iCnt=0;   //counter
    int iValue=0;
    printf("\nEnteer no. of elements you want to eneter: ");
    scanf("%d",&iCount);

    ptr=(int *)malloc(sizeof(int)*iCount);
    printf("\nDynamic memory allocated successfully");

    printf("\nENter the elements: ");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nENter the element no. %d  ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\nEnter the Number you want to search: ");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iCount,iValue);

    printf("\n %d occurs %d times",iValue,iRet);

    free(ptr);
     printf("\nDynamic memory gets deallocated successfully");

    return 0;
}