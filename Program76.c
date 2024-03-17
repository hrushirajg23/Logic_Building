//Accept N numbers from user and find addition of even numbers of that  array

//Time Complexity: 0(n)

#include<stdio.h>  
#include<stdlib.h>  //for malloc and free

int EvenAddition(int *Arr,int iSize)
{
    int iCnt=0;
    int iEvenSum=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenSum=iEvenSum+Arr[iCnt];      //Arr[iCnt] is internally considered as *(Arr+iCnt)
        }
    }   

    printf("\n");
    return iEvenSum;
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

    int iRet=EvenAddition(ptr,iCount);  //Display(100,4)   //passing address and no. of elements to the function
    printf("\nThe Addition of even numbers is: %d",iRet);


    free(ptr);  //free(100)   //Memory manager of OS performs the task of freeing the memory


    printf("\nDynamic memory gets deallocateed successfully...");
    
    return 0;
}