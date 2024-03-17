//Base address of array

#include<stdio.h>

int main()
{
    int arr[4]={11,21,51,101};
    printf("\nBase address of array : %d",arr);  //base address i.e address of 1st element of the array 
    printf("\n address of first element is : %d",&(arr[0]));
    printf("\nAddress of second element of array is : %d",&(arr[1]));
    printf("\nFirst element is : %d",(arr[0]));
    printf("\nSize of whole array is :%d",sizeof(arr));
    printf("\nSize of the second element of array is : %d",sizeof(arr[1]));
    return 0;
}