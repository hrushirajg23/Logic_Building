#include<stdio.h>

void display()
{
    register int no=11;                 
    register int  i;                      
    printf("\nvalue of no is %d\n",no);
    printf("\nvalue of i is %d\n",i);
    
}

int main()
{
    display();
    
    return 0;
}