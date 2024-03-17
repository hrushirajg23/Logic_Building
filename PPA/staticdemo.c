#include<stdio.h>

void fun()
{
    auto int  i=10;
    i++;
    printf("\nvalue of i is:  %d",i);    
}


int main()
{
    int no=51;
    fun();
    fun();
    fun();

    return 0;
}