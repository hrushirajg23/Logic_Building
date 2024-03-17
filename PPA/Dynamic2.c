#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int iSize=0;
    int *ptr=NULL;

    printf("\nEnter the size of array: ");
    scanf("%d",&iSize);

    ptr=(int*)calloc(iSize,sizeof(int));

    //prototype
    //void*calloc(int No_of_Elements,int data_type)

    ptr[0]=11;
    ptr[1]=21;
    ptr[2]=51;


    return 0;
}