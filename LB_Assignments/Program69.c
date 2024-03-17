//Accept N numbers from user and return freuqency of 11 from it

#include<stdio.h>
#include<stdlib.h>



int Frequency(int *Arr,int iLength)
{
    int iFreq=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iRet=0;

    printf("\nEnter the number of elements: ");
    scanf("%d",&iSize);

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

    iRet=Frequency(p,iSize);

    printf("\nResult is %d",iRet);
    return 0;
}