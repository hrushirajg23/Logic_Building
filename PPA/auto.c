#include<stdio.h>

void display()
{
    int no=11;                  //auto int no=11
    int i;                      //auto int i    
    auto int j=21;              //


    printf("\nvalue of no is %d\n",no);
    printf("\nvalue of i is %d\n",i);
    
}

int main()
{
    display();
    printf("%d",no);

    return 0;
}