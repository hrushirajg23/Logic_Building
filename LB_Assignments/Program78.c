//Accept N numbers from user and return the difference between largest and the smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)     //85 66 3 66 93 88
    {
        if(Arr[iCnt]<iMin)  
        {
            iMin=Arr[iCnt]; //66 3
        }
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt]; //93
        }
    }
    return (iMax-iMin);
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

    iRet=Difference(p,iSize);

    printf("\nDifference is: %d",iRet);

    free(p);

    return 0;
}