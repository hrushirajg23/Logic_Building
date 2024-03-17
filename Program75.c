//Accept N numbers from user and find addition of that numbers

//Time Complexity: 0(n)

#include<stdio.h>  
#include<stdlib.h>  //for malloc and free

int Addition(int *Arr,int iSize)
{
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];      //Arr[iCnt] is internally considered as *(Arr+iCnt)
    }   

    printf("\n");
    return iSum;
}

int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;   //Pointer initialised to NULL to avoid Segmentation Faults

    printf("\nEnter the no. of elements that you want to enter: ");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount*sizeof(int));
    printf("\nDynamic memory gets allocated successfully for %d elements",iCount);

    
    printf("\nEnter the %d values",iCount);

        //1        //2      //3
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter the element no.%d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);//4    //  internally considered as   &(*(ptr+iCnt))  
    }

    int iRet=Addition(ptr,iCount);  //Display(100,4)   //passing address and no. of elements to the function
    printf("\nThe Addition numbers is: %d",iRet);


    free(ptr);  //free(100)   //Memory manager of OS performs the task of freeing the memory


    printf("\nDynamic memory gets deallocateed successfully...");
    
    return 0;
}