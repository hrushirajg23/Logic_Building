#include<stdio.h>  
#include<stdlib.h>  //for malloc and free

void Display(int *Arr,int iSize)
{
    printf("\nElements of the array are: ");

    int iCnt=0;
    //   1        2        3
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);//4      //*(Arr+iCnt)
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
    printf("\nDynamic memory gets allocated successfully for %d elements",iCount);

    int iCnt=0;

    printf("\nEnter the %d values",iCount);

        //1        //2      //3
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter the element no.%d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);//4    //  internally considered as   &(*(ptr+iCnt))
    }

    Display(ptr,iCount);  //Display(100,4)   //passing address and no. of elements to the function

    free(ptr);  //free(100)   //Memory manager of OS performs the task of freeing the memory
    printf("\nDynamic memory gets deallocateed successfully...");
    
    return 0;
}