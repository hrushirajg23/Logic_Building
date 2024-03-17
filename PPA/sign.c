#include<stdio.h>

int main()
{   
    int i=10;
    signed int j=20;
    signed int k=-30;
    unsigned int a = 40;
    unsigned int b=-40; //not  allowed 

    printf("\n%d",i);
    printf("\n%d",j);
    printf("\n%d",k);
    printf("\n%u",b);
    printf("\n%d",a);

    int x=10;  //4 bytes
    short int y =10;  //2 bytes
    long int z=33;  //8 bytes

    printf("\nsSize of x is %d",sizeof(x));
    printf("\nsSize of y is %d",sizeof(y));
    printf("\nsSize of z is %d",sizeof(z));
    
    
    return 0;
}