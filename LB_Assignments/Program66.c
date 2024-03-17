//Accept N numbers from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr,int iLength)
{
    int iCnt=0;
    int iFreq=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0 )
        {
            iFreq++;
        }
        
    }
    return iFreq;
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

    iRet=CountEven(p,iSize);

    printf("\nResult is %d",iRet);
    free(p);

    return 0;
}