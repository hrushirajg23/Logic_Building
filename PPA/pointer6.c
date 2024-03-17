#include<stdio.h>

int main()
{   
    int array[4]={4,5,6,7};
    int *p=array;

    printf("%d %d %d %d",array+2,p[1],*(array+2),*(p+3));


    printf("\n");
    int arr[5]={1,2,3,4,5};
    printf("The base address of array is %p or %p\n",arr,&arr);
    printf("After incrementing by one they point to %p and %p\n",arr+1,&arr+1);
    return 0;
}



/*
The general form of an expression involving a subscript operator is E1[E2], where both E1 and E2 are 
sub-expressions. One of the sub-expressions E1 or E2 must be of array type or pointer type and the 
other expression must be of integer type. Every expression of the form E1[E2] automatically gets 
converted to an equivalent expression of the form *(E1+E2). Hence, the expression E1[E2] is internally 
represented as *(E1+E2). 
*/