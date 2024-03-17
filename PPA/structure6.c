#include<stdio.h>

struct Demo
{
   int i;
   float j;
   struct Hello
   {
        int no;
        float d;
   }hobj;   //object of struct hello
}dobj;    //object of struct demo

int main()
{
    dobj.i=11;
    dobj.j=90.99;

    dobj.hobj.no=21;
    dobj.hobj.d=90.88;

    printf("Size of object is:  %d\n",sizeof(dobj));
    
    printf("%d\n",dobj.i);
    printf("%f\n",dobj.j);
    printf("%d\n",dobj.hobj.no);
    printf("%f\n",dobj.hobj.d);

    return 0;
}