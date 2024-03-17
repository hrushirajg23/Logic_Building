//Write a program to accept N numbers from user and find Minimum and MAximum number of that array


#include<stdio.h>
#include<stdlib.h>

void MaxMin(int *Arr,int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];  
    int iMax=Arr[0];
    
    for(iCnt=0;iCnt<iSize;iCnt++)   
    {    if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    printf("\nMaximum element is %d",iMax);
    printf("\nMinimum element is %d",iMin);
    
}


int main()
{   
    int iCount=0;
    int *ptr=NULL;
    int iRet=0;
    int iCnt=0;   //counter
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

    MaxMin(ptr,iCount);

    free(ptr);
     printf("\nDynamic memory gets deallocated successfully");

    return 0;
}