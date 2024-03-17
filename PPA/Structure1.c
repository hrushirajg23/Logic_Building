#include<stdio.h>

struct demo
{   
    int no;
    float f;
    
    int x;
    float d;
};

int main()
{    
    struct demo obj1;
    struct demo obj2;

    obj1.no=11;
    obj1.f=19.6;

    obj1.x=21;
    obj2.d=3.33;
    printf("\nSize of structures is : %d ",sizeof(obj));
    
    return 0;
}