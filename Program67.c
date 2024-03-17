#include<stdio.h>   //for printf and scanf functions 
#include<stdlib.h>  //for malloc and free functions


void Display(int *Arr,int iSize)    //we can write(int Arr[],int iSize) //updated in next code
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);  // *(Arr+iCnt)
    }
    printf("\n");  
}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    printf("\nEnter the number of elements: ");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount* sizeof(int));     //malloc return karto void* , we tell him to return int* by typecasting karan ptr cha type is integer

    printf("\nEnter the elements: ");

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);    //&(*(ptr+icnt))  <==[Internal Consideration]
    }
    printf("\nYour entered elements are: ");
    
    Display(ptr,iCount);
    
    free(ptr);
    return 0;
}