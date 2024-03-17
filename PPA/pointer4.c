#include<stdio.h>

int main()
{       
    int arr[5]={10,20,30,40,50};
    
    int *p=arr;  //same as int *p = &(arr[0]);

    int *q=&(arr[4]);

    printf("\n%d",*(arr+1));  //20

    printf("\n%d",arr+1);  //base address +1



    return 0;
}




/*
13. How is the declaration int * a[10] different from int (*a) [10]?
 While reading C declarations remember that [] bindsÂ more tightly than *. In the declaration 
statement int *a[10]; the identifier name a is bound to [] instead of * and it is read as ‘a is an array 
of 10 integer pointers’. In the declaration statement int (*a)[10];, () is used to bind a to *. Hence, the 
declaration is read as ‘a is a pointer to an array of 10 integers’
*/