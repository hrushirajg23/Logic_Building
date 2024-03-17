#include<stdio.h>

int main()
{   
    int no=21;

    int *p=&no;

    int *a=&no;

    int **q=&p;

    int **b=&p;

    int ***r=&q;

    int ****x=&r;

    int *****y=&x;

    printf("\n size of *p is %d",sizeof(*p)); //4 => karan pointer is of type integer
    printf("\n size of **q is %d",sizeof(**q)); //4  => karan pointer is of type integer
    printf("\n size of *q is %d",sizeof(*q)); //8 => karan *q stores address of no and *(*q) dereferences that address

    return 0;

}