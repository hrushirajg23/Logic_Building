#include<stdio.h>
//Pre Decrement
int main()
{
    int i=10;
    int No=0;

    No=--i;
    printf("%d\n",No);  //9
    printf("%d",i);     //9
    return 0;
}