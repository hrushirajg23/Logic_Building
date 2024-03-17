//Accept N numbers from user and accept Range ,Display all elements from that range

#include<stdio.h>
#include<stdlib.h>


void Range(int *Arr,int iLength,int iStart,int iEnd)
{
      
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize=0,iCnt=0,iValue1=0,iValue2=0;
    int *p=NULL;
    int iRet=0;

    printf("\nEnter the number of elements: ");
    scanf("%d",&iSize);

    printf("\nEnter the starting point ");
    scanf("%d",&iValue1);

    printf("\nEnter the Ending point  ");
    scanf("%d",&iValue2);

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
    
    Range(p,iSize,iValue1,iValue2);

    
    
    return 0;
}