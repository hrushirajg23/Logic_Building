#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1;   //12 bytes allocated
    struct Demo obj2;   //12 bytes allocated

    obj1.i=11;
    obj1.f=90.99;
    obj1.j=21;

    struct Demo *ptr =&obj2;

    ptr->i=51;
    ptr->f=90.8;
    ptr->j=101;

    printf("%d\n",obj1.i);
    printf("%d\n",ptr->i);


    return 0;
}