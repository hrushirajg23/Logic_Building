#include<stdio.h>

int main()
{   
    int no=11;
    int *p=&no;  // p gives address to which it points and *p gives value stored in that address

    printf("\n%d",no);
    printf("\n%d",&no);
    printf("\n%d",sizeof(no));
    printf("\n%d",p);
    printf("\n%d",&p);
    printf("\n%d",*p);
    printf("\n%d",sizeof(p));


    return 0;
}           