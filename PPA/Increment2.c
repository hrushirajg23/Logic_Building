#include<stdio.h>
//Pre increment
int main()
{
    int i=10;
    int No=0;

    No=++i;
    printf("%d\n",No);  //11
    printf("%d",i);     //11
    return 0;
}