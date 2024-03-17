#include<stdio.h>  
#include<stdlib.h>  //for malloc and free

void Display(int *Arr,int iSize)
{
    printf("\nElements of the array are: ");

    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]); //*(Arr+iCnt)
    }
    printf("\n");
}

int main()
{
    int iCount=0;
    int *ptr=NULL; 
    printf("\nEnter the no. of elements that you want to enter: ");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount*sizeof(int));

    printf("\nEnter the values: ");

    int iCnt=0;

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);    //&(*(ptr+iCnt))
    }

    Display(ptr,iCount);     //passing address and no. of elements to the function

    free(ptr);
    
    return 0;
}