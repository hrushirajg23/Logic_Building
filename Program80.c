//Write a program to accept N numbers from user and find Max number of that Numbers

//Mall-Tshirt example Mahagda Shirt ghyeycha

#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr,int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];   //Consider 1st Shirt is the most mahag karan aplyala pudche shirts chi price mahitach nahit
    
    for(iCnt=0;iCnt<iSize;iCnt++)
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

    iRet=Maximum(ptr,iCount);

    printf("\nMaximum element is %d",iRet);

    free(ptr);
     printf("\nDynamic memory gets deallocated successfully");

    return 0;
}