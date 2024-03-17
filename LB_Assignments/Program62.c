//Accept N numbers from user and display such elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iLength)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%5==0)
        {
            printf("%d ",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int iSize=0 ;
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

    Display(p,iSize);
    free(p);

    return 0;
}