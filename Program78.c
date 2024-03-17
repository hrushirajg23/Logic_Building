//Write a program to accept N numbers from user and find average of that numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int *Arr,int iSize)
{
    int iCnt=0,iSum=0;
    //float fAverage=0.0f;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }

    //fAverage=(float)iSum/(float)iSize;  //This can also be done
    return (float)iSum/(float)iSize;
}

int main()
{   
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;   //counter
    float fRet=0.0f;
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

    fRet=Average(ptr,iCnt);

    printf("Average is %f", fRet);

    free(ptr);
     printf("\nDynamic memory gets deallocated successfully");

    return 0;
}