//Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iRet=0,iCnt=0,iSize=0;
    int *p=NULL;

    printf("\nEnter the number of elements :");
    scanf("%d",&iSize);

    p=(int*)malloc(sizeof(int)*iSize);

    if(p==NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d\t",iCnt+1);
        scanf("%d",&p[iCnt]);  //&(*(p+iCnt))
    }

    iRet=Maximum(p,iSize);

    printf("\nLargest number is: %d",iRet);

    free(p);

    return 0;
}