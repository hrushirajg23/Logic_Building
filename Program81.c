//Write a program to accept N numbers from user and find Minimum number of that Numbers

//Example of Attya chya mula la sarvat swasta shirt ghyeychay

#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr,int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];   //Consider 1st Shirt is the most swasta karan aplyala pudche shirts chi price mahitach nahit
    
    for(iCnt=0;iCnt<iSize;iCnt++)   //We can also start loop from iCnt=1; karan pahila iteration will always be false
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    iRet=Minimum(ptr,iCount);

    printf("\nMinimum element is %d",iRet);

    free(ptr);
     printf("\nDynamic memory gets deallocated successfully");

    return 0;
}