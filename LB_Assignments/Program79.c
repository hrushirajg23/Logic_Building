//Accept N numbers from user and display all such numbers which contains 3 digits in it
#include<stdio.h>
#include<stdlib.h>

void Digits(int *Arr,int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)     
    {
        if(Arr[iCnt]>99)  
        {
            printf("%d\t",Arr[iCnt]);
        }
        
    }
   
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

    Digits(p,iSize);
    
    free(p);

    return 0;
}