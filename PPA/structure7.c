#include<stdio.h>

struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float d;
    };
};

int main()
{
    struct Demo dobj;
    
    printf("Size of object is : %d\n",sizeof(dobj));    //according to std compilers size is 8 but vscode shows 16
    
    return 0;
}