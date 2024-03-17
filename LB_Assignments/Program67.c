//Accept N numbers from user and return difference between frequency of even and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iLength)
{
    int iCnt=0,iEven=0,iOdd=0,iDiff;
    

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0 )
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
        
    }
    iDiff=iEven-iOdd;
    return iDiff;
}

int main()
{
    int iSize=0 ,iRet=0;
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

    iRet=Frequency(p,iSize);

    printf("\nResult is %d",iRet);
    free(p);

    return 0;
}