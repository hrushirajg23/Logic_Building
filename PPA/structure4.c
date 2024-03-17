#include<stdio.h>

struct Demo
{
    int *p;
    float *q;
    double d;
};

int main()
{   
    struct Demo obj;

    int i=11;
    float f = 90.9;

    obj.p=&i;
    obj.q=&f;
    obj.d=90.999;

    printf("\n%d",*(obj.p));
    printf("\n%.1f",*(obj.q));
    printf("\n%lf",obj.d);

    return 0;
}