//Accept N numbers from user and accept one another number and return index of Last occurence of that number

#include<stdio.h>
#include<stdlib.h>


int LastOccurence(int *Arr,int iLength,int iNo)
{
    int iOccurence=-1;   
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iOccurence=iCnt;
        }
    }
    return iOccurence;
}

int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int *p=NULL;
    int iRet=0;

    printf("\nEnter the number of elements: ");
    scanf("%d",&iSize);

    printf("\nEnter the number whose LastOccurence you want to find: ");
    scanf("%d",&iValue);

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
    
    iRet=LastOccurence(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("\nThere is no such number");
    }
    else
    {
        printf("\nLast Occurence of number is %d",iRet);
    }
    return 0;
}