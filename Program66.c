#include<stdio.h>   //for printf and scanf functions 
#include<stdlib.h>  //for malloc and free functions




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
    
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);    //(*(ptr+icnt))
    }

    // scanf("%d",&ptr[0]);     //100
    // scanf("%d",&ptr[1]);     //104   
    // scanf("%d",&ptr[2]);    //108
    // scanf("%d",&ptr[3]);    //112
    

    return 0;
}