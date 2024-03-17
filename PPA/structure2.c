#include<stdio.h>

struct demo 
{   
    int no;
    int arr[3];
    float f;


};


int main()
{
    struct demo obj;
    obj.no=10;
    obj.arr[0]=20;
    obj.arr[1]=30;
    obj.arr[2]=40;

    obj.f=90.8;
    return 0;
}