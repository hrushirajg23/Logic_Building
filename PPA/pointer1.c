#include<stdio.h>

int main()
{
    char ch = 'A';
    int i= 11;
    float f =23.9f;
    double d =98.999;

    char *cp=&ch;   //cp stores address of ch
    int *ip=&i;     //ip stores address of i
    float *fp=&f;   //fp stores address of f
    double *dp=&d;  //dp stores address of d


    return 0;
}