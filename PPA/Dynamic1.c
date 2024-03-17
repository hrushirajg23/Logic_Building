#include<stdio.h>
#include<stdlib.h>

int main()
{
    auto int arr[5];         //static memory
    auto float fValue=0.0f;  //static memory
    auto double brr[4];      //static memory

    int iSize=0;
    int *ptr=NULL;

    printf("\nEnter the size of array: ");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    ptr[0]=11;
    ptr[1]=21;
    ptr[2]=51;

    free(ptr);

    return 0;
}