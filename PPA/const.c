#include<stdio.h>

int main()
{
    int  x=11;
    const int y=11;

    x++; //allowed
    x--; //allowed
    x=21;  //allowed

    printf("%d",x);
    
    printf("\n%d",y);
    return 0;

}