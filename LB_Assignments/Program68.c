//Accept N numbers from user and check whether that numbers contain 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int *Arr,int iLength)
{
    bool bFlag=false;
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    bool bRet=false;

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
        printf("\nEnter the element %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iSize);

    if(bRet==true)
    {
        printf("\n11 is present");
    }
    else
    {
        printf("\n11 is absent");
    }




    return 0;
}